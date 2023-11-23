from esphome import pins
from esphome.components import stepper
import esphome.config_validation as cv
import esphome.codegen as cg
from esphome.const import (
    CONF_CS_PIN,
    CONF_CURRENT_RESISTOR,
    CONF_DIRECTION,
    CONF_ID,
    CONF_RESET_PIN,
    CONF_REVERSED,
    CONF_SLEEP_PIN
)

CONF_MOTOR_CURRENT = "motor_current"
CONF_MOTOR_HOLD_POWER = "motor_hold_power"

CONF_DIRECTION_NORMAL = 'normal'

tmc5160_ns = cg.esphome_ns.namespace("tmc5160")
TMC5160 = tmc5160_ns.class_("TMC5160_Stepper", stepper.Stepper, cg.Component)

CONFIG_SCHEMA = stepper.STEPPER_SCHEMA.extend(
    {
        cv.Required(CONF_ID): cv.declare_id(TMC5160),
        cv.Required(CONF_CS_PIN): pins.gpio_output_pin_schema,
        cv.Optional(CONF_SLEEP_PIN): pins.gpio_output_pin_schema,
        cv.Optional(CONF_RESET_PIN): pins.gpio_output_pin_schema,
        cv.Required(CONF_CURRENT_RESISTOR): cv.resistance,
        cv.Required(CONF_MOTOR_CURRENT): cv.current,
        cv.Required(CONF_MOTOR_HOLD_POWER): cv.percentage,
        cv.Optional(CONF_DIRECTION): cv.one_of(CONF_DIRECTION_NORMAL, CONF_REVERSED)
    }
).extend(cv.COMPONENT_SCHEMA)


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    await stepper.register_stepper(var, config)

    cs_pin = await cg.gpio_pin_expression(config[CONF_CS_PIN])
    cg.add(var.set_cs_pin(cs_pin))

    if sleep_pin_config := config.get(CONF_SLEEP_PIN):
        sleep_pin = await cg.gpio_pin_expression(sleep_pin_config)
        cg.add(var.set_sleep_pin(sleep_pin))

    if reset_pin_config := config.get(CONF_RESET_PIN):
        reset_pin = await cg.gpio_pin_expression(reset_pin_config)
        cg.add(var.set_reset_pin(reset_pin))

    cg.add(var.set_current_resistor(config[CONF_CURRENT_RESISTOR]))
    cg.add(var.set_motor_current(config[CONF_MOTOR_CURRENT]))
    cg.add(var.set_motor_hold_power(config[CONF_MOTOR_HOLD_POWER]))
    
    if direction_config := config.get(CONF_DIRECTION):
        cg.add(var.set_motor_direction_reversed(direction_config == CONF_REVERSED))