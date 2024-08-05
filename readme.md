# ESPHome: TMC5160 Stepper Implementation

This is an implementation of the stepper component that allows using the TMC5160 driver by Trinamic to drive a stepper motor using SPI commands. The advantage of this method compared to the standard stepper components dir/step pins is that the motor driver takes care of the motor output, and does so to a high number of microsteps/frquency while putting very low load on the microcontroller. The TMC5160 has been used for my application due to the high current allowing greater torque, while running cool compared to a TMC5130.

This stepper implementation uses the awesome [TMC5160_Arduino library by tommag](https://github.com/tommag/TMC5160_Arduino). This was chosen rather than the equally good [TMCStepper library by teemuatlut](https://github.com/teemuatlut/TMCStepper) because the documentation around setting the current was easier to understand for me and had better examples. I'm not using any of the other TMC drivers, and therefore did not need a library that supported them.

> ***Note:*** *This code needs some tidying up, at which point I'll submit it as a PR back to ESPHome.*

# Supported Hardware
Any TMC5160 should work, however due to most of the breakout boards being designed fo use in 3D printers, many require a modification (read soldering) to put them into SPI mode.

I have successfully bee using the TMC5160 BOB, which although slightly larger is super configurable as the reference design. I have also had success with this [one from Farnell](
https://uk.farnell.com/trinamic/tmc5160-silentstepstick/breakout-brd-stepper-motor-ctrl/dp/3019059) (which I believe is from Watterott) with a modification to cut a trace to enable SPI mode.

I have tried using the BTT TMC5160 from Big Tree Tech, making the mod required to put it in SPI mode, but without success.

There is some good info on the boards and mods in the following links:
- https://learn.watterott.com/silentstepstick/pinconfig/tmc5160/
- https://wiki.fysetc.com/S5160_V1.2/
- https://github.com/teemuatlut/TMCStepper/issues/157
- https://github.com/bigtreetech/BIGTREETECH-TMC5160-V1.0/issues/8
- https://marlinfw.org/docs/hardware/tmc_drivers.html

# Configuration

## Seting up SPI
The library is using SPI to comunicate with the TMC5160. The pins for this need to be setup.

#### Example

spi:
  clk_pin: GPIO14
  mosi_pin: GPIO13
  miso_pin: GPIO12

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

## Setting the Motor Current
To set the motor current correctly you will need:
- The sense resistor value for the TMC5160
- The rated current for the motor. This will be on the motor data sheet.

> ***Note:*** *Typically the sense resistor for TMC5160 is 0.075 ohm, but some newer boards like the TMC5160+ have different values to allow higher currents for more power.*

The values can be set in the YAML configuration

#### Example Stepper Configuration

stepper:
  - platform: tmc5160
    id: blind_stepper
    cs_pin: GPIO15                # This allows multiple SPI devices to be used to control independent steppers.
    sleep_pin: GPIO04             # Controls if the TMC5160 is in sleep mode (moter is unexcited)
    reset_pin: GPIO05             # This is used to reset the TMC5160 when doing the initial configuration
    current_resistor: 0.075ohm    # Check the TMC5160 board you are using for he exact resistor value
    motor_current: 1.68A          # This comes from the motor datasheet
    motor_hold_power: 30%         # The amount of current used for hold, ie. the motor is excited but mot moving
    max_speed: 500                # The maximum speed in steps per second. The TMC5160 handles microstepping, so typically
                                  # 200 steps per revolution
    acceleration: 200             # Acceleration to max speed, steps per second^2
    deceleration: 200             # Deceleration to max speed, steps per second^2
    direction: reversed           # Reverse the direction of the motor


# Usage
The API is the standard stepper motor API. Check the included example for how to build a blind using the project.


# Resources
The TMC5160 library that this is based on has a great arduino sketch that can be used to tune the TMC5160 - https://github.com/tommag/TMC5160_Arduino/blob/0471224cc7e45d0ec6d3a89bacf4c7f79d845a5b/examples/TMC5160_Config_Wizard/TMC5160_Config_Wizard.ino#L575

