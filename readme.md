# TMC5160 Stepper Implementation

This is an implementation of the stepper component that allows using the TMC5160 driver by Trinamic to drive a stepper motor using SPI commands. The advantage of this method compared to the standard stepper components dir/step pins is that the motor driver takes care of the motor output, and does so to a high number of microsteps/frquency while putting very low load on the microcontroller. The TMC5160 has been used for my application due to the high current allowing greater torque, while running cool compared to a TMC5130.



This stepper implementation uses the awesome [TMC5160_Arduino library by tommag](https://github.com/tommag/TMC5160_Arduino). This was chosen rather than the equally good [TMCStepper library by teemuatlut](https://github.com/teemuatlut/TMCStepper) because the documentation around setting the current was easier to understand for me and had better examples. I'm not using any of the other TMC drivers, and therefore did not need a library that supported them.

# Configuration

## Adding the TMC5160 Library to a Configuration

When you create an ESPHome configuration, add the TMC5160_Arduino library in the configuration block. It has a dependency on the built in SPI library, so that **must** be in the list before the TMC5160_Arduino entry.

#### Example:
```
esphome:
  device_name: lounge-window-blind
  platform: ESP8266
  board: d1_mini
  libraries:
    # Libraries from PlatformIO
    - SPI
    - tommag/TMC5160 # Requires SPI, must be before this in the list
```

## Setting the Current Sense Resistor Value
TODO

Typically the sense resistor for TMC5160 is 0.075 ohm, but some newer boards like the TMC5160+ have different values to allow higher currents for more power.

## Setting the Motor Current
TODO


RSense: 
Motor Current: 1.68

https://github.com/tommag/TMC5160_Arduino/blob/0471224cc7e45d0ec6d3a89bacf4c7f79d845a5b/examples/TMC5160_Config_Wizard/TMC5160_Config_Wizard.ino#L575

