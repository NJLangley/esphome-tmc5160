# ESPHome: TMC5160 Stepper for Motorised Blinds

This is an implementation of the stepper component that allows using the TMC5160 driver by Trinamic to drive a stepper motor using SPI commands. The advantage of this method compared to the standard stepper components dir/step pins is that the motor driver takes care of the motor output, and does so to a high number of micro-steps/frequency while putting very low load on the micro-controller. The TMC5160 has been used for my application due to the high current allowing greater torque, while running cool compared to a TMC5130.

This stepper implementation uses the awesome [TMC5160_Arduino library by tommag](https://github.com/tommag/TMC5160_Arduino). This was chosen rather than the equally good [TMCStepper library by teemuatlut](https://github.com/teemuatlut/TMCStepper) because the documentation around setting the current was easier to understand for me and had better examples. I'm not using any of the other TMC drivers, and therefore did not need a library that supported them.

> ***Note:*** *This code needs some tidying up, at which point I'll submit it as a PR back to ESPHome.*

# Supported Hardware
Any TMC5160 should work, however due to most of the breakout boards being designed fo use in 3D printers, many require a modification (read soldering) to put them into SPI mode.

I have had success using the TMC5160 BOB, which although slightly larger is super configurable as it is the reference design. 

For the final PCB's I have used [this one from Farnell](
https://uk.farnell.com/trinamic/tmc5160-silentstepstick/breakout-brd-stepper-motor-ctrl/dp/3019059) (which I believe is from Watterott) with a modification to cut a trace to enable SPI mode. The photo below shows the trace to cut:

<!-- TODO: Add images of the trace to cut -->

I have tried using the BTT TMC5160 from Big Tree Tech, making the mod required (see the links below) to put it in SPI mode, but without success.

There is some good info on the boards and mods in the following links:
- https://learn.watterott.com/silentstepstick/pinconfig/tmc5160/
- https://wiki.fysetc.com/S5160_V1.2/
- https://github.com/teemuatlut/TMCStepper/issues/157
- https://github.com/bigtreetech/BIGTREETECH-TMC5160-V1.0/issues/8
- https://marlinfw.org/docs/hardware/tmc_drivers.html

# Configuration

## Basic Blind Configuration using Defaults
This is a basic blind setup that uses the default values for SPI and the motor settings:
```
substitutions:
  device_name: your-window-blind
  friendly_name: Your Window Blind
  node_name: your_window_blind
  wifi_static_ip: !secret wifi_static_ip_your_window_blind
  closed_position: '4400'
  opening_clutch_backlash_adjustment: '0'

packages:
  # Board specific packages
  board: !include packages/board_esp8266_d1_mini.yaml
  stepper: !include packages/tmc5160_stepper_esp8266_d1_mini.yaml
  
  # Functionality packages
  roller_blind: !include packages/roller_blind.yaml
  
  # Boilerplate packages
  wifi: !include packages/wifi_static_ip.yaml
  ota: !include packages/ota.yaml
  uptime_sensor: !include packages/uptime_sensor.yaml

logger:
  level: VERBOSE
```

## Packages for boards
There are separate packages for the two boards I typically use, as the config is a little different between them. The boards are:
- [WeMos D1 mini Lite](https://docs.platformio.org/en/latest/boards/espressif8266/d1_mini_lite.html) - This is the board I use on the custom blind PCB's.
- [AZ-Delivery ESP-32 Dev Kit C V4](https://docs.platformio.org/en/latest/boards/espressif32/az-delivery-devkit-v4.html#id1) - This is a board I often use for testing on a breadboard.

There are two packages used, one for the board setup, and one for the setup of the SPI pins and the TMC5160 motor. Both of these have default parameters that can be overridden when used to configure a device.

The packages are named:
- `board_<board_type>.yaml` for the board configuration.
- `tmc5160_stepper_<board_type>.yaml` for the TMC5160 configuration. This board also imports the required SPI and TMC5160 libraries.

> ***Note:*** *By overriding values for the Chip select pin on the TMC5160 stepper package, you should be able to run multiple stepper controllers on a single board.*

### Defaults: WeMos D1 mini Lite


### Defaults: AZ-Delivery ESP-32 Dev Kit C V4




## Setting the Motor Current
To set the motor current correctly you will need:
- The sense resistor value for the TMC5160
- The rated current for the motor. This will be on the motor data sheet.

> ***Note:*** *Typically the sense resistor for TMC5160 is 0.075 ohm, but some newer boards like the TMC5160+ have different values to allow higher currents for more power.*







<!-- The values can be set in the YAML configuration

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
    direction: reversed           # Reverse the direction of the motor -->


# Usage
The API is the standard stepper motor API. Check the included example for how to build a blind using the project.


# Resources
The TMC5160 library that this is based on has a great arduino sketch that can be used to tune the TMC5160 - https://github.com/tommag/TMC5160_Arduino/blob/0471224cc7e45d0ec6d3a89bacf4c7f79d845a5b/examples/TMC5160_Config_Wizard/TMC5160_Config_Wizard.ino#L575

