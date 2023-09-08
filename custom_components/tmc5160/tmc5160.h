#pragma once

#include "esphome/core/component.h"
#include "esphome/core/hal.h"
#include "esphome/components/stepper/stepper.h"
#include <TMC5160.h>

namespace esphome {
namespace tmc5160 {

// Can't be called TMC5160, as that's the name of the library we use to 
// talk to the driver using SPI
class TMC5160_Stepper : public stepper::Stepper, public Component {
 public:
  void set_cs_pin(InternalGPIOPin *cs_pin) { cs_pin_ = cs_pin; }
  void set_sleep_pin(GPIOPin *sleep_pin) { this->sleep_pin_ = sleep_pin; }
  void set_reset_pin(GPIOPin *reset_pin) { this->reset_pin_ = reset_pin; }

  void set_current_resistor(float current_resistor) { this->current_resistor_ = current_resistor; }
  void set_motor_current(float motor_current) { this->motor_current_ = motor_current; }
  void set_motor_hold_power(float motor_hold_power) { this->motor_hold_power_ = motor_hold_power; }

  void setup() override;
  void dump_config() override;
  void loop() override;

  void on_update_speed() override;

  void reset_position(float position);
  float get_setup_priority() const override { return setup_priority::HARDWARE; }

 protected:

  bool enabled_pin_state_;
  
  InternalGPIOPin *cs_pin_;
  GPIOPin *sleep_pin_{nullptr};
  GPIOPin *reset_pin_{nullptr};
  float current_resistor_ = 1;
  float motor_current_ = 0;
  float motor_hold_power_ = 0;


  bool is_driver_enabled_;

  void enable_driver(bool state);
  void reset_driver();

  TMC5160_SPI* motor;
  TMC5160::MotorParameters motor_params_;
};

}  // namespace tmc5160
}  // namespace esphome