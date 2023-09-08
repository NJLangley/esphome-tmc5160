#include "tmc5160.h"
#include "esphome/core/log.h"

#include <Arduino.h>
#include <TMC5160.h>

namespace esphome {
namespace tmc5160 {

static const char *const TAG = "tmc5160.stepper";

TMC5160_SPI* motor;

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
  motor = new TMC5160_SPI(cs_pin); //Use default SPI peripheral and SPI settings.

  // This sets the motor & driver parameters /!\ run the configWizard for your driver and motor for fine tuning !
  TMC5160::PowerStageParameters powerStageParams; // defaults.
  TMC5160::MotorParameters motorParams;
  // TODO: These should be mandatory settings on the YAML

  float maxRmsCurrent = 0.33 / (this->current_resistor_ * sqrt(2.0));
  motorParams.globalScaler = constrain(floor(this->motor_current_ * 256.0 / maxRmsCurrent), 32, 256);
  motorParams.irun = constrain(floor(this->motor_current_ * 31.0 / (maxRmsCurrent * (float)motorParams.globalScaler / 256.0)), 0, 31);
  motorParams.ihold = constrain(floor((float)motorParams.irun * this->motor_hold_power_), 0, 31);

  SPI.begin();
  motor->begin(powerStageParams, motorParams, TMC5160::NORMAL_MOTOR_DIRECTION);

  // ramp definition
  motor->setRampMode(TMC5160::POSITIONING_MODE);
  motor->setMaxSpeed(400);
  motor->setAcceleration(100);

  delay(1000); // Standstill for automatic tuning

  ESP_LOGI(TAG, "Motor status:  %d", (int)motor->readStatus());
}

void TMC5160_Stepper::dump_config() {
  ESP_LOGCONFIG(TAG, "TMC5160:");
  LOG_PIN("  SPI Chip Select Pin: ", this->cs_pin_);
  LOG_PIN("  Sleep Pin: ", this->sleep_pin_);
  LOG_PIN("  Reset Pin: ", this->reset_pin_);
  ESP_LOGCONFIG(TAG, "  Current Resistor:  %f", this->current_resistor_);
  ESP_LOGCONFIG(TAG, "  Motor Current:  %f", this->motor_current_);
  ESP_LOGCONFIG(TAG, "  Motor Hold Power:  %f", this->motor_hold_power_);

  ESP_LOGCONFIG(TAG, "  Motor Driver Info:  %d", (int)motor->readStatus());
  ESP_LOGCONFIG(TAG, "    Status: %d", (int)motor->readStatus());
  ESP_LOGCONFIG(TAG, "    Status: %d", (int)motor->readStatus());
  ESP_LOGCONFIG(TAG, "    Status: %d", (int)motor->readStatus());
  ESP_LOGCONFIG(TAG, "    Status: %d", (int)motor->readStatus());

  
  LOG_STEPPER(this);
}

void TMC5160_Stepper::enable_driver(bool state)
{
  if (this->sleep_pin_ != nullptr) {
    this->sleep_pin_->digital_write(!state); // Active low
  }
  this->is_driver_enabled_ = state;
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
void TMC5160_Stepper::reset_position(float position) {
  motor->setCurrentPosition(position);
  motor->setTargetPosition(position);
}


void TMC5160_Stepper::loop() {
  // bool at_target = this->has_reached_target();

  // We should be able to talk to the driver even if it is not enabled, but
  // we won't get movement until we enable it.
  this->enable_driver(true);

  // If the sleep pin state is true, the driver is active

  // is_motor_moving = motor->getCurrentSpeed() != 0;

  // Check the speed, does it go negative in reverse? If so
  // we can use this to determine if we are moving the correct
  // direction






  // uint32_t now = millis();
  // static unsigned long t_dirchange, t_echo;
  // static bool dir;

  // // every n seconds or so...
  // if ( now - t_dirchange > 30000 )
  // {
  //   t_dirchange = now;

  //   // reverse direction
  //   dir = !dir;
  //   motor->setTargetPosition(dir ? 2000 : 0);  // 1 full rotation = 200s/rev
  // }

  // // print out current position
  // if( now - t_echo > 100 )
  // {
  //   t_echo = now;

  //   // get the current target position
  //   float xactual = motor->getCurrentPosition();
  //   float vactual = motor->getCurrentSpeed();
    
  //   ESP_LOGI(TAG, "Motor status:  %d", (int)motor->readStatus());
  //   ESP_LOGD(TAG, "Current position:  %f", xactual);
  //   ESP_LOGD(TAG, "Current speed:     %f", vactual);
  // }









  // if (this->sleep_pin_ != nullptr) {
  //   bool sleep_rising_edge = !is_driver_enabled_ & !at_target;
  //   this->sleep_pin_->digital_write(!at_target);
  //   this->is_driver_enabled_ = !at_target;
  //   if (sleep_rising_edge) {
  //     delayMicroseconds(1000);
  //   }
  // }
//   if (at_target) {
//     this->high_freq_.stop();
//   } else {
//     this->high_freq_.start();
//   }

//   int32_t dir = this->should_step_();
//   if (dir == 0)
//     return;

//   this->cs_pin_->digital_write(dir == 1);
//   delayMicroseconds(50);
//   this->step_pin_->digital_write(true);
//   delayMicroseconds(5);
//   this->step_pin_->digital_write(false);
}

}  // namespace tmc5160
}  // namespace esphome