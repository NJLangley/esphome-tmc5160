# ESPHome: TMC5160 Stepper for Motorised Blinds

This is an implementation of the stepper component that allows using the TMC5160 driver by Trinamic to drive a stepper motor using SPI commands. The advantage of this method compared to the standard stepper components dir/step pins is that the motor driver takes care of the motor output, and does so to a high number of micro-steps/frequency while putting very low load on the micro-controller. The TMC5160 has been used for my application due to the high current allowing greater torque, while running cool compared to a TMC5130.

This stepper implementation uses the awesome [TMC5160_Arduino library by tommag](https://github.com/tommag/TMC5160_Arduino). This was chosen rather than the equally good [TMCStepper library by teemuatlut](https://github.com/teemuatlut/TMCStepper) because the documentation around setting the current was easier to understand for me and had better examples. I'm not using any of the other TMC drivers, and therefore did not need a library that supported them.

> ***Note:*** *This code needs some tidying up, at which point I'll submit it as a PR back to ESPHome.*

# Supported Hardware
Any TMC5160 should work, however due to most of the breakout boards being designed fo use in 3D printers, many require a modification (read soldering) to put them into SPI mode.

I have had success using the TMC5160 BOB, which although slightly larger is super configurable as it is the reference design. 

For the final PCB's I designed for my blinds project I have used [this one from Farnell](
https://uk.farnell.com/trinamic/tmc5160-silentstepstick/breakout-brd-stepper-motor-ctrl/dp/3019059) (which I believe is from Watterott) with a modification to cut a trace to enable SPI mode. The photo below shows the trace to cut.

I have tried using the BTT TMC5160 from Big Tree Tech, making the mod required (see the links below) to put it in SPI mode, but without success.


## How to modify the TMC5160 SilentStepStick to enable SPI mode
![How to modify the TMC5160 SilentStepStick to enable SPI mode](/docs/images/TMC5160_Modification_for_SPI_mode.jpeg)
Scratch the trace away using something sharp. Its a *lot* easier to do this before you solder the header onto the board!

## More TMC5160 Info / Links
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

## ESPHome Packages for Micro-Controllers and TMC5160
There are separate packages for the two boards I typically use, as the config is a little different between them. The boards are:
- [WeMos D1 mini Lite](https://docs.platformio.org/en/latest/boards/espressif8266/d1_mini_lite.html) - This is the board I use on the custom blind PCB's.
- [AZ-Delivery ESP-32 Dev Kit C V4](https://docs.platformio.org/en/latest/boards/espressif32/az-delivery-devkit-v4.html#id1) - This is a board I often use for testing on a breadboard.

There are two packages used, one for the board setup, and one for the setup of the SPI pins and the TMC5160 motor. Both of these have default parameters that can be overridden when used to configure a device.

The packages are named:
- `board_<board_type>.yaml` for the board configuration.
- `tmc5160_stepper_<board_type>.yaml` for the TMC5160 configuration. This board also imports the required SPI and TMC5160 libraries.

> ***Note:*** *By overriding values for the Chip select pin on the TMC5160 stepper package, you should be able to run multiple stepper controllers on a single board.*

## Default Pins

Pin Name | WeMos D1 Mini Default | AZ ESP-32 Dev Kit Default | Description
---------|-----------------------|---------------------------|------------
SPI_CLK_PIN | `GPIO14` | `GPIO18` | SPI clock pin
SPI_MOSI_PIN | `GPIO13` | `GPIO23` | Serial Data Out. An output signal on a device where data is sent out to another SPI device.
SPI_MISO_PIN | `GPIO12` | `GPIO19 ` | Serial Data In. An input signal on a device where data is received from another SPI device.
TMC_CS_PIN | `GPIO15` | `GPIO5` | Chip Select. Activated by the controller to initiate communication with a given peripheral. If you want to use multiple TMC5160 devices, this should be different for each one.
TMC_SLEEP_PIN | `GPIO04` | `GPIO14` | The pin used to put the TMC5160 to sleep, ie. no power going to the motor. If you want to use multiple TMC5160 devices, this should be different for each one.
TMC_RESET_PIN | `GPIO05` | `GPIO16` | The pin used to provide the vcc logic power input to the TMC5160. Because the logic power is tiny, this can come from a pin-out, meaning dropping it low can reset the micro-controller if required. This is useful if you power cycle the micro-controller and need to re-initialise the TMC5160.


# Configuring the TMC5160 Stepper
## Setting the Motor Current
To set the motor current correctly you will need:
- The sense resistor value for the TMC5160
- The rated current for the motor. This will be on the motor data sheet.

> ***Note:*** *Typically the sense resistor for TMC5160 is 0.075 ohm, but some newer boards like the TMC5160+ have different values to allow higher currents for more power.*


## Default Values
The default values are set in the `tmc5160_stepper_*` packages. They are the same for all packages:
  
Substitution Name | Default Value | Type | Description
------------------|---------------|------|------------
motor_id | tmc_stepper | | The name of the stepper. Use this in the stepper actions, or with the `id()` function in lambdas
motor_current_resistor | 0.075ohm | positive double, unit is `ohm` | Check the data sheet for the TMC5160 board you are using for the correct resistor value. Getting this wrong could put too much current through the motor!
motor_motor_current | 1.68A | positive double, unit is `A` | Check the data sheet for the stepper motor you are using for the correct current. This will likely be listed for a specific voltage, such as 2.8V. Getting this wrong could put too much current through the motor!
motor_motor_hold_power | 30% | positive integer, unit is `%` | The amount of power used when the motor is still and the driver is active
motor_max_speed | '500' | positive integer | The maximum steps per second of the motor. The TMC5160 does all the micro-stepping itself, so with a motor with 200 steps per revolution, a value of 500 gives 150 rpm (`rpm = (max speed / steps) * 60`)
motor_acceleration | '200' | positive integer | The acceleration to the maximum speed, in steps per second. As per the motor_max_speed, the TMC5160 does all the micro-stepping itself, so base this off the motor steps.
motor_deceleration | '200' | positive integer | The deceleration of the motor to 0, in steps per second. As per the motor_max_speed, the TMC5160 does all the micro-stepping itself, so base this off the motor steps.
motor_direction | normal | `normal` or `reversed` | Whether the motor spins in the normal direction, or is reversed. The motor moves based on the difference between the current position and target position, but for the same given current and target values, this will swap the direction the motor spins.

## How to Overide Default Values
To override default values for the TMC5160 and motor configuration, use the package syntax with vars, as per the snippet below:
```
packages:
  # --- Other packages omitted for clarity ---
  stepper: !include
    file: packages/tmc5160_stepper_esp8266_d1_mini.yaml
    vars:
      motor_id: blind_stepper
      TMC_CS_PIN: GPIO1
      motor_max_speed: '800'
```



# Usage
The API is mostly the standard ESPHome Stepper API, with the addition of a few functions. Check the included example for how to build a blind using the project.

## Additional Functions
Name | Description
-----|------------
`float get_speed()` | Returns the current speed
`void stop()` | Send the stop signal to the TMC5160. The motor will decelerate to a stop using the configured deceleration value.
`void set_position(float position)` | Set the current position of the motor without actually moving it. Useful when trying to calibrate the motor position.
`bool get_is_driver_enabled()` | Returns a flag indicating if the TMC5160 is enabled, ie sending power to the motor coils.

There are a number of additional properties, but these are set via YAML so shouldn't be used directly (They are reset on each boot)
- `void set_cs_pin(InternalGPIOPin *cs_pin)`
- `void set_sleep_pin(GPIOPin *sleep_pin)`
- `void set_reset_pin(GPIOPin *reset_pin)`
- `void set_current_resistor(float current_resistor)`
- `void set_motor_current(float motor_current)`
- `void set_motor_hold_power(float motor_hold_power)`
- `void set_motor_direction_reversed(bool motor_direction_reversed)`


# Resources
The TMC5160 library that this is based on has a great arduino sketch that can be used to tune the TMC5160 - https://github.com/tommag/TMC5160_Arduino/blob/0471224cc7e45d0ec6d3a89bacf4c7f79d845a5b/examples/TMC5160_Config_Wizard/TMC5160_Config_Wizard.ino#L575

# Thanks
Huge thanks to [tommag](https://github.com/tommag) and [teemuatlut](https://github.com/teemuatlut) for their excellent work building libraries for the TMC5160 that has made this project possible.
