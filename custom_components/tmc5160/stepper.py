from esphome import pins
from esphome.components import stepper
import esphome.config_validation as cv
import esphome.codegen as cg
from esphome.const import CONF_CS_PIN, CONF_ID, CONF_SLEEP_PIN


tmc5160_ns = cg.esphome_ns.namespace("tmc5160")
TMC5160 = tmc5160_ns.class_("TMC5160_Stepper", stepper.Stepper, cg.Component)

CONFIG_SCHEMA = stepper.STEPPER_SCHEMA.extend(
    {
        cv.Required(CONF_ID): cv.declare_id(TMC5160),
        cv.Required(CONF_CS_PIN): pins.gpio_output_pin_schema,
        cv.Optional(CONF_SLEEP_PIN): pins.gpio_output_pin_schema,
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