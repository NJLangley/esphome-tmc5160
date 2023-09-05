#pragma once

#include "esphome/core/component.h"
#include "esphome/core/hal.h"
#include "esphome/components/stepper/stepper.h"

namespace esphome {
namespace tmc5160 {

// Can't be called TMC5160, as that's the name of the library we use to 
// talk to the driver using SPI
class TMC5160_Stepper : public stepper::Stepper, public Component {
 public:
  void set_cs_pin(InternalGPIOPin *cs_pin) { cs_pin_ = cs_pin; }
  void set_sleep_pin(GPIOPin *sleep_pin) { this->sleep_pin_ = sleep_pin; }
  void set_reset_pin(GPIOPin *reset_pin) { this->reset_pin_ = reset_pin; }
  void setup() override;
  void dump_config() override;
  void loop() override;
  void reset_position(float position);
  float get_setup_priority() const override { return setup_priority::HARDWARE; }

 protected:
  InternalGPIOPin *cs_pin_;
  GPIOPin *sleep_pin_{nullptr};
  GPIOPin *reset_pin_{nullptr};
  bool sleep_pin_state_;
};

}  // namespace tmc5160
}  // namespace esphome