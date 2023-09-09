#include "tmc5160.h"
#include "esphome/core/log.h"

#include <Arduino.h>
#include <TMC5160.h>

namespace esphome {
namespace tmc5160 {

static const char *const TAG = "tmc5160.stepper";

//TMC5160_SPI* motor;

void TMC5160_Stepper::setup() {

  // If the controller reboots without the TMC5160 retting reset, the SPI communication
  // doesn't work and the motor is unresponsive. The datasheet says that to reset the driver
  // VCC_IO can be dropped low. For drivers with VCC_IO supporting 3.3-5V, the logic is driven
  // by the onboard step-down, so VCC_IO has a very low current draw and we can power it from a
  // data pin, which means we can drop it low briefly to reset the driver before setup.
  this->reset_driver();

  ESP_LOGCONFIG(TAG, "Setting up TMC5160...");
  if (this->sleep_pin_ != nullptr) {
    this->sleep_pin_->setup();
  }
  this->enable_driver(false);

  this->cs_pin_->setup();
  this->cs_pin_->digital_write(false);
  uint8_t cs_pin = this->cs_pin_->get_pin();
  this->motor = new TMC5160_SPI(cs_pin); //Use default SPI peripheral and SPI settings.

  // This sets the motor & driver parameters /!\ run the configWizard for your driver and motor for fine tuning !
  TMC5160::PowerStageParameters powerStageParams; // defaults.
  TMC5160::MotorParameters* motorParams = &this->motor_params_;
  // TODO: These should be mandatory settings on the YAML

  float maxRmsCurrent = 0.33 / (this->current_resistor_ * sqrt(2.0));
  motorParams->globalScaler = constrain(floor(this->motor_current_ * 256.0 / maxRmsCurrent), 32, 256);
  motorParams->irun = constrain(floor(this->motor_current_ * 31.0 / (maxRmsCurrent * (float)motorParams->globalScaler / 256.0)), 0, 31);
  motorParams->ihold = constrain(floor((float)motorParams->irun * this->motor_hold_power_), 0, 31);

  SPI.begin();
  this->motor->begin(powerStageParams, this->motor_params_, TMC5160::NORMAL_MOTOR_DIRECTION);


  // ramp definition
  this->motor->setRampMode(TMC5160::POSITIONING_MODE);
  // Initial speed and acceleration
  motor->setMaxSpeed(this->max_speed_);
  motor->setAcceleration(this->acceleration_);

  delay(1000); // Standstill for automatic tuning

  this->dump_config();
}

void TMC5160_Stepper::dump_config() {
  ESP_LOGCONFIG(TAG, "TMC5160:");
  LOG_PIN("  SPI Chip Select Pin: ", this->cs_pin_);
  LOG_PIN("  Sleep Pin: ", this->sleep_pin_);
  LOG_PIN("  Reset Pin: ", this->reset_pin_);
  ESP_LOGCONFIG(TAG, "  Current Resistor:  %f", this->current_resistor_);
  ESP_LOGCONFIG(TAG, "  Motor Current:  %f", this->motor_current_);
  ESP_LOGCONFIG(TAG, "  Motor Hold Power:  %f", this->motor_hold_power_);

  ESP_LOGCONFIG(TAG, "  Motor Driver Info:  %d", (int)this->motor->readStatus());
  ESP_LOGCONFIG(TAG, "    Global Scaler:  %d", this->motor_params_.globalScaler);
  ESP_LOGCONFIG(TAG, "    IRun:  %d", this->motor_params_.irun);
  ESP_LOGCONFIG(TAG, "    IHold:  %d", this->motor_params_.ihold);

  
  LOG_STEPPER(this);
}

void TMC5160_Stepper::reset_driver()
{
  if (this->reset_pin_ != nullptr) {
    ESP_LOGCONFIG(TAG, "Resetting TMC5160...");
    this->reset_pin_->setup();
    this->reset_pin_->digital_write(false); // Set to low to reset the TMC5160
    delay(100);
    this->reset_pin_->digital_write(true); // Set to high to power the TMC5160
  }
}


// Set initial position, or reset position if needed
void TMC5160_Stepper::set_position(float position) {
  if (this->motor->getCurrentSpeed() > 0)
    motor->stop();

  while(this->motor->getCurrentSpeed() > 0)
    delay(100);

  this->current_position = position;
  this->motor->setCurrentPosition(position);
  this->target_position = position;
  this->motor->setTargetPosition(position);
}



void TMC5160_Stepper::enable_driver(bool state)
{
  ESP_LOGD(TAG, "enable_driver::state=%s", state ? "True" : "False");
  if (this->sleep_pin_ != nullptr) {
    this->sleep_pin_->digital_write(!state); // Active low
    ESP_LOGD(TAG, "enable_driver::setting driver to =%s", !state ? "On" : "Off");  // Active low
  }
  this->is_driver_enabled_ = state;
  ESP_LOGD(TAG, "enable_driver::this->is_driver_enabled_=%s", this->is_driver_enabled_ ? "True" : "False");
}

void TMC5160_Stepper::on_update_speed() {
  this->motor->setMaxSpeed(this->max_speed_);
}


void TMC5160_Stepper::loop() {
  bool at_target = this->has_reached_target();

  this->current_position = motor->getCurrentPosition();
  this->current_speed_ = motor->getCurrentSpeed();

  // If the motor is moving the the opposite direction to the target we need to tell it the new target
  bool change_direction = (this->current_position > this->target_position && this->current_speed_ > 0) ||
                          (this->current_position < this->target_position && this->current_speed_ < 0);

  // If we have reached the target, disable the driver if the pin is set. Otherwise the driver will use the hold current
  if (at_target && this->is_driver_enabled_)
    this->enable_driver(false);
  
  // Otherwise if the direction is wrong, or the motor is not moving and not at the target, update the driver target
  else if (change_direction || (this->current_speed_ == 0 && !at_target)){
    // Acceleration is not change by an event handler like the speed, so update it any time we start a movement
    //this->motor->setAccelerations(this->acceleration_, this->deceleration_, this->acceleration_, this->deceleration_);
    this->motor->setTargetPosition(this->target_position);

    // If the motor is not enabled, enable it now
    if (!this->is_driver_enabled_)
      this->enable_driver(true);
  }




  uint32_t now = millis();
  static unsigned long t_echo;
  const int seconds = 5;
  // every n seconds or so...
  if ( now - t_echo > seconds * 1000 )
  {
    ESP_LOGD(TAG, "Driver enabled: %s", this->is_driver_enabled_ ? "True" : "False");
    ESP_LOGD(TAG, "  Driver status description: %s", this->motor->getDriverStatusDescription(this->motor->getDriverStatus()));
    ESP_LOGD(TAG, "  change_direction: %d", change_direction);
    ESP_LOGD(TAG, "  current_position: %d", this->current_position);
    ESP_LOGD(TAG, "  target_position: %d", this->target_position);
    ESP_LOGD(TAG, "  current_speed_: %f", this->current_speed_);
    ESP_LOGD(TAG, "  driver max speed: %f", this->max_speed_);

    t_echo = now;
  }


}

}  // namespace tmc5160
}  // namespace esphome