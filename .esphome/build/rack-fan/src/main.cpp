// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace sensor;
using namespace fan;
using namespace number;
using namespace text_sensor;
using namespace switch_;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
ota::OTAStartTrigger *ota_otastarttrigger_id;
Automation<> *automation_id_9;
LambdaAction<> *lambdaaction_id_6;
ota::OTAProgressTrigger *ota_otaprogresstrigger_id;
Automation<float> *automation_id_10;
LambdaAction<float> *lambdaaction_id_7;
ota::OTAEndTrigger *ota_otaendtrigger_id;
Automation<> *automation_id_11;
LambdaAction<> *lambdaaction_id_8;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
pulse_counter::PulseCounterSensor *fan_pulse;
sensor::MultiplyFilter *sensor_multiplyfilter_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
dht::DHT *dht_dht_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
sensor::Sensor *rack_fan_temperature;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id;
Automation<float> *automation_id;
wifi_signal::WiFiSignalSensor *wifi_signal_wifisignalsensor_id;
uptime::UptimeSecondsSensor *uptime_raw;
uptime::UptimeSecondsSensor *uptime_human_readable;
sensor::SensorRawStateTrigger *sensor_sensorrawstatetrigger_id;
Automation<float> *automation_id_5;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
ledc::LEDCOutput *rack_fan_speed;
speed::SpeedFan *speed_speedfan_id;
fan::Fan *rack_fan_toggle;
fan::FanTurnOnTrigger *fan_fanturnontrigger_id;
Automation<> *automation_id_6;
output::SetLevelAction<> *output_setlevelaction_id_5;
template_::TemplateNumber *fan_speed_override;
number::NumberStateTrigger *number_numberstatetrigger_id;
Automation<float> *automation_id_8;
fan::FanIsOnCondition<float> *fan_fanisoncondition_id;
IfAction<float> *ifaction_id_5;
output::SetLevelAction<float> *output_setlevelaction_id_7;
template_::TemplateTextSensor *uptime_human;
restart::RestartSwitch *restart_restartswitch_id;
fan::FanIsOffCondition<float> *fan_fanisoffcondition_id;
IfAction<float> *ifaction_id;
LambdaAction<float> *lambdaaction_id;
output::SetLevelAction<float> *output_setlevelaction_id;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_2;
Automation<float> *automation_id_2;
fan::FanIsOffCondition<float> *fan_fanisoffcondition_id_2;
IfAction<float> *ifaction_id_2;
LambdaAction<float> *lambdaaction_id_2;
output::SetLevelAction<float> *output_setlevelaction_id_2;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_3;
Automation<float> *automation_id_3;
fan::FanIsOffCondition<float> *fan_fanisoffcondition_id_3;
IfAction<float> *ifaction_id_3;
LambdaAction<float> *lambdaaction_id_3;
output::SetLevelAction<float> *output_setlevelaction_id_3;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_4;
Automation<float> *automation_id_4;
fan::FanIsOffCondition<float> *fan_fanisoffcondition_id_4;
IfAction<float> *ifaction_id_4;
LambdaAction<float> *lambdaaction_id_4;
output::SetLevelAction<float> *output_setlevelaction_id_4;
sensor::Sensor *rack_fan_humidity;
text_sensor::TextSensorPublishAction<float> *text_sensor_textsensorpublishaction_id;
fan::FanTurnOffTrigger *fan_fanturnofftrigger_id;
Automation<> *automation_id_7;
LambdaAction<> *lambdaaction_id_5;
DelayAction<> *delayaction_id;
output::SetLevelAction<> *output_setlevelaction_id_6;
globals::RestoringGlobalsComponent<float> *dhttemp;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  //   {}
  // esphome:
  //   name: rack-fan
  //   min_version: 2025.3.0
  //   build_path: build/rack-fan
  //   friendly_name: ''
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("rack-fan", "", "", "", __DATE__ ", " __TIME__, false);
  // sensor:
  // fan:
  // number:
  // text_sensor:
  // switch:
  // logger:
  //   level: DEBUG
  //   logs:
  //     dht: DEBUG
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level("dht", ESPHOME_LOG_LEVEL_DEBUG);
  logger_logger_id->set_component_source("logger");
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase_id);
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   ap:
  //     ssid: '{breadboard_fan}'
  //     password: password
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_id_2
  //     priority: 0.0
  //   use_address: rack-fan.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("rack-fan.local");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("My Minions");
  wifi_wifiap_id_2.set_password("cqE@&qxvAmm33Znr");
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("{breadboard_fan}");
  wifi_wifiap_id.set_password("password");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source("wifi");
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: !secret 'ota_password'
  //   on_begin:
  //   - then:
  //     - logger.log:
  //         format: OTA start
  //         args: []
  //         tag: main
  //         level: DEBUG
  //       type_id: lambdaaction_id_6
  //     automation_id: automation_id_9
  //     trigger_id: ota_otastarttrigger_id
  //   on_progress:
  //   - then:
  //     - logger.log:
  //         format: OTA progress %0.1f%%
  //         args:
  //         - !lambda |-
  //           x
  //         tag: main
  //         level: DEBUG
  //       type_id: lambdaaction_id_7
  //     automation_id: automation_id_10
  //     trigger_id: ota_otaprogresstrigger_id
  //   on_end:
  //   - then:
  //     - logger.log:
  //         format: OTA end
  //         args: []
  //         tag: main
  //         level: DEBUG
  //       type_id: lambdaaction_id_8
  //     automation_id: automation_id_11
  //     trigger_id: ota_otaendtrigger_id
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("BZL@rDwg3zdKQ!8jQqU");
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  ota_otastarttrigger_id = new ota::OTAStartTrigger(esphome_esphomeotacomponent_id);
  automation_id_9 = new Automation<>(ota_otastarttrigger_id);
  lambdaaction_id_6 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA start");
  });
  automation_id_9->add_actions({lambdaaction_id_6});
  ota_otaprogresstrigger_id = new ota::OTAProgressTrigger(esphome_esphomeotacomponent_id);
  automation_id_10 = new Automation<float>(ota_otaprogresstrigger_id);
  lambdaaction_id_7 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "OTA progress %0.1f%%", x);
  });
  automation_id_10->add_actions({lambdaaction_id_7});
  ota_otaendtrigger_id = new ota::OTAEndTrigger(esphome_esphomeotacomponent_id);
  automation_id_11 = new Automation<>(ota_otaendtrigger_id);
  lambdaaction_id_8 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA end");
  });
  automation_id_11->add_actions({lambdaaction_id_8});
  // substitutions:
  //   friendly_name: Breadboard Test Fan
  //   device_name: breadboard-fan
  //   node_name: breadboard_fan
  // esp32:
  //   board: esp32dev
  //   flash_size: 4MB
  //   framework:
  //     version: 2.0.5
  //     advanced:
  //       ignore_efuse_custom_mac: false
  //     source: ~3.20005.0
  //     platform_version: platformio/espressif32@5.4.0
  //     type: arduino
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // sensor.pulse_counter:
  //   platform: pulse_counter
  //   pin:
  //     number: 2
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Breadboard Test Fan Fan Speed
  //   id: fan_pulse
  //   unit_of_measurement: RPM
  //   filters:
  //   - multiply: 0.5
  //     type_id: sensor_multiplyfilter_id
  //   count_mode:
  //     rising_edge: INCREMENT
  //     falling_edge: DISABLE
  //   update_interval: 30s
  //   disabled_by_default: false
  //   force_update: false
  //   icon: mdi:pulse
  //   accuracy_decimals: 2
  //   state_class: measurement
  //   use_pcnt: true
  //   internal_filter: 13us
  fan_pulse = new pulse_counter::PulseCounterSensor(true);
  App.register_sensor(fan_pulse);
  fan_pulse->set_name("Breadboard Test Fan Fan Speed");
  fan_pulse->set_object_id("breadboard_test_fan_fan_speed");
  fan_pulse->set_disabled_by_default(false);
  fan_pulse->set_icon("mdi:pulse");
  fan_pulse->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  fan_pulse->set_unit_of_measurement("RPM");
  fan_pulse->set_accuracy_decimals(2);
  fan_pulse->set_force_update(false);
  sensor_multiplyfilter_id = new sensor::MultiplyFilter(0.5f);
  fan_pulse->set_filters({sensor_multiplyfilter_id});
  fan_pulse->set_update_interval(30000);
  fan_pulse->set_component_source("pulse_counter.sensor");
  App.register_component(fan_pulse);
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_2);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_INPUT);
  fan_pulse->set_pin(esp32_esp32internalgpiopin_id);
  fan_pulse->set_rising_edge_mode(pulse_counter::PULSE_COUNTER_INCREMENT);
  fan_pulse->set_falling_edge_mode(pulse_counter::PULSE_COUNTER_DISABLE);
  fan_pulse->set_filter_us(13);
  // sensor.dht:
  //   platform: dht
  //   pin:
  //     number: 23
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   model: DHT11
  //   temperature:
  //     name: Temperature
  //     id: rack_fan_temperature
  //     accuracy_decimals: 3
  //     on_value_range:
  //     - above: 50.0
  //       then:
  //       - if:
  //           condition:
  //             fan.is_off:
  //               id: rack_fan_toggle
  //             type_id: fan_fanisoffcondition_id
  //           then:
  //           - logger.log:
  //               format: Set fan level 100 over 50C
  //               args: []
  //               tag: main
  //               level: DEBUG
  //             type_id: lambdaaction_id
  //           - output.set_level:
  //               id: rack_fan_speed
  //               level: 1.0
  //             type_id: output_setlevelaction_id
  //         type_id: ifaction_id
  //       automation_id: automation_id
  //       trigger_id: sensor_valuerangetrigger_id
  //     - above: 40.0
  //       then:
  //       - if:
  //           condition:
  //             fan.is_off:
  //               id: rack_fan_toggle
  //             type_id: fan_fanisoffcondition_id_2
  //           then:
  //           - logger.log:
  //               format: Set fan level 66 over 40C
  //               args: []
  //               tag: main
  //               level: DEBUG
  //             type_id: lambdaaction_id_2
  //           - output.set_level:
  //               id: rack_fan_speed
  //               level: 0.66
  //             type_id: output_setlevelaction_id_2
  //         type_id: ifaction_id_2
  //       automation_id: automation_id_2
  //       trigger_id: sensor_valuerangetrigger_id_2
  //     - above: 30.0
  //       then:
  //       - if:
  //           condition:
  //             fan.is_off:
  //               id: rack_fan_toggle
  //             type_id: fan_fanisoffcondition_id_3
  //           then:
  //           - logger.log:
  //               format: Set fan level 33 over 30C
  //               args: []
  //               tag: main
  //               level: DEBUG
  //             type_id: lambdaaction_id_3
  //           - output.set_level:
  //               id: rack_fan_speed
  //               level: 0.33
  //             type_id: output_setlevelaction_id_3
  //         type_id: ifaction_id_3
  //       automation_id: automation_id_3
  //       trigger_id: sensor_valuerangetrigger_id_3
  //     - below: 30.0
  //       then:
  //       - if:
  //           condition:
  //             fan.is_off:
  //               id: rack_fan_toggle
  //             type_id: fan_fanisoffcondition_id_4
  //           then:
  //           - logger.log:
  //               format: Set fan level 0 under 30C
  //               args: []
  //               tag: main
  //               level: DEBUG
  //             type_id: lambdaaction_id_4
  //           - output.set_level:
  //               id: rack_fan_speed
  //               level: 0.0
  //             type_id: output_setlevelaction_id_4
  //         type_id: ifaction_id_4
  //       automation_id: automation_id_4
  //       trigger_id: sensor_valuerangetrigger_id_4
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: °C
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: Humidity
  //     id: rack_fan_humidity
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: humidity
  //     state_class: measurement
  //   update_interval: 2s
  //   id: dht_dht_id
  dht_dht_id = new dht::DHT();
  dht_dht_id->set_update_interval(2000);
  dht_dht_id->set_component_source("dht.sensor");
  App.register_component(dht_dht_id);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_23);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  dht_dht_id->set_pin(esp32_esp32internalgpiopin_id_2);
  rack_fan_temperature = new sensor::Sensor();
  App.register_sensor(rack_fan_temperature);
  rack_fan_temperature->set_name("Temperature");
  rack_fan_temperature->set_object_id("temperature");
  rack_fan_temperature->set_disabled_by_default(false);
  rack_fan_temperature->set_device_class("temperature");
  rack_fan_temperature->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  rack_fan_temperature->set_unit_of_measurement("\302\260C");
  rack_fan_temperature->set_accuracy_decimals(3);
  rack_fan_temperature->set_force_update(false);
  sensor_valuerangetrigger_id = new sensor::ValueRangeTrigger(rack_fan_temperature);
  sensor_valuerangetrigger_id->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id);
  sensor_valuerangetrigger_id->set_min(50.0f);
  automation_id = new Automation<float>(sensor_valuerangetrigger_id);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: Breadboard Test Fan WiFi Strength
  //   update_interval: 60s
  //   disabled_by_default: false
  //   force_update: false
  //   id: wifi_signal_wifisignalsensor_id
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  //   entity_category: diagnostic
  wifi_signal_wifisignalsensor_id = new wifi_signal::WiFiSignalSensor();
  App.register_sensor(wifi_signal_wifisignalsensor_id);
  wifi_signal_wifisignalsensor_id->set_name("Breadboard Test Fan WiFi Strength");
  wifi_signal_wifisignalsensor_id->set_object_id("breadboard_test_fan_wifi_strength");
  wifi_signal_wifisignalsensor_id->set_disabled_by_default(false);
  wifi_signal_wifisignalsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_signal_wifisignalsensor_id->set_device_class("signal_strength");
  wifi_signal_wifisignalsensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_wifisignalsensor_id->set_unit_of_measurement("dBm");
  wifi_signal_wifisignalsensor_id->set_accuracy_decimals(0);
  wifi_signal_wifisignalsensor_id->set_force_update(false);
  wifi_signal_wifisignalsensor_id->set_update_interval(60000);
  wifi_signal_wifisignalsensor_id->set_component_source("wifi_signal.sensor");
  App.register_component(wifi_signal_wifisignalsensor_id);
  // sensor.uptime:
  //   platform: uptime
  //   name: Uptime Seconds
  //   id: uptime_raw
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  //   device_class: duration
  //   state_class: total_increasing
  //   entity_category: diagnostic
  //   update_interval: 60s
  //   type: seconds
  uptime_raw = new uptime::UptimeSecondsSensor();
  App.register_sensor(uptime_raw);
  uptime_raw->set_name("Uptime Seconds");
  uptime_raw->set_object_id("uptime_seconds");
  uptime_raw->set_disabled_by_default(false);
  uptime_raw->set_icon("mdi:timer-outline");
  uptime_raw->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  uptime_raw->set_device_class("duration");
  uptime_raw->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_raw->set_unit_of_measurement("s");
  uptime_raw->set_accuracy_decimals(0);
  uptime_raw->set_force_update(false);
  uptime_raw->set_update_interval(60000);
  uptime_raw->set_component_source("uptime.sensor");
  App.register_component(uptime_raw);
  // sensor.uptime:
  //   platform: uptime
  //   name: Breadboard Test Fan Uptime
  //   id: uptime_human_readable
  //   update_interval: 60s
  //   on_raw_value:
  //   - then:
  //     - text_sensor.template.publish:
  //         id: uptime_human
  //         state: !lambda |-
  //           int seconds = round(id(uptime_raw).raw_state);
  //           int days = seconds / (24 * 3600);
  //           seconds = seconds % (24 * 3600);
  //           int hours = seconds / 3600;
  //           seconds = seconds % 3600;
  //           int minutes = seconds /  60;
  //           seconds = seconds % 60;
  //           return (
  //             (days ? to_string(days) + "d " : "") +
  //             (hours ? to_string(hours) + "h " : "") +
  //             (minutes ? to_string(minutes) + "m " : "") +
  //             (to_string(seconds) + "s")
  //           ).c_str();
  //       type_id: text_sensor_textsensorpublishaction_id
  //     automation_id: automation_id_5
  //     trigger_id: sensor_sensorrawstatetrigger_id
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  //   device_class: duration
  //   state_class: total_increasing
  //   entity_category: diagnostic
  //   type: seconds
  uptime_human_readable = new uptime::UptimeSecondsSensor();
  App.register_sensor(uptime_human_readable);
  uptime_human_readable->set_name("Breadboard Test Fan Uptime");
  uptime_human_readable->set_object_id("breadboard_test_fan_uptime");
  uptime_human_readable->set_disabled_by_default(false);
  uptime_human_readable->set_icon("mdi:timer-outline");
  uptime_human_readable->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  uptime_human_readable->set_device_class("duration");
  uptime_human_readable->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_human_readable->set_unit_of_measurement("s");
  uptime_human_readable->set_accuracy_decimals(0);
  uptime_human_readable->set_force_update(false);
  sensor_sensorrawstatetrigger_id = new sensor::SensorRawStateTrigger(uptime_human_readable);
  automation_id_5 = new Automation<float>(sensor_sensorrawstatetrigger_id);
  // output:
  // output.ledc:
  //   platform: ledc
  //   id: rack_fan_speed
  //   pin:
  //     number: 1
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   frequency: 25000.0
  //   min_power: 0.01
  //   max_power: 1.0
  //   zero_means_zero: false
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_1);
  esp32_esp32internalgpiopin_id_3->set_inverted(false);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  rack_fan_speed = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_3);
  rack_fan_speed->set_component_source("ledc.output");
  App.register_component(rack_fan_speed);
  rack_fan_speed->set_max_power(1.0f);
  rack_fan_speed->set_min_power(0.01f);
  rack_fan_speed->set_zero_means_zero(false);
  rack_fan_speed->set_frequency(25000.0f);
  // fan.speed:
  //   platform: speed
  //   output: rack_fan_speed
  //   name: Breadboard Test Fan Override Enable
  //   id: rack_fan_toggle
  //   on_turn_on:
  //   - then:
  //     - output.set_level:
  //         id: rack_fan_speed
  //         level: !lambda |-
  //           return id(fan_speed_override).state/100.0;
  //       type_id: output_setlevelaction_id_5
  //     automation_id: automation_id_6
  //     trigger_id: fan_fanturnontrigger_id
  //   on_turn_off:
  //   - then:
  //     - logger.log:
  //         format: Power of Fan turned OFF
  //         args: []
  //         tag: main
  //         level: DEBUG
  //       type_id: lambdaaction_id_5
  //     - delay: 1s
  //       type_id: delayaction_id
  //     - output.set_level:
  //         id: rack_fan_speed
  //         level: !lambda |-
  //           if (id(rack_fan_temperature).raw_state > 50){
  //             return 1;}
  //           else if (id(rack_fan_temperature).raw_state > 40){
  //             return 0.66;}
  //           else if (id(rack_fan_temperature).raw_state > 30){
  //             return 0.33;}
  //           else
  //             return 0;
  //       type_id: output_setlevelaction_id_6
  //     automation_id: automation_id_7
  //     trigger_id: fan_fanturnofftrigger_id
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   output_id: speed_speedfan_id
  //   speed_count: 100
  speed_speedfan_id = new speed::SpeedFan(100);
  speed_speedfan_id->set_component_source("speed.fan");
  App.register_component(speed_speedfan_id);
  rack_fan_toggle = speed_speedfan_id;
  App.register_fan(rack_fan_toggle);
  rack_fan_toggle->set_name("Breadboard Test Fan Override Enable");
  rack_fan_toggle->set_object_id("breadboard_test_fan_override_enable");
  rack_fan_toggle->set_disabled_by_default(false);
  rack_fan_toggle->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  fan_fanturnontrigger_id = new fan::FanTurnOnTrigger(rack_fan_toggle);
  automation_id_6 = new Automation<>(fan_fanturnontrigger_id);
  output_setlevelaction_id_5 = new output::SetLevelAction<>(rack_fan_speed);
  // number.template:
  //   platform: template
  //   name: Fan Speed Override
  //   id: fan_speed_override
  //   internal: false
  //   max_value: 100.0
  //   min_value: 0.0
  //   step: 33.3
  //   optimistic: true
  //   mode: SLIDER
  //   on_value:
  //   - then:
  //     - if:
  //         condition:
  //           fan.is_on:
  //             id: rack_fan_toggle
  //           type_id: fan_fanisoncondition_id
  //         then:
  //         - output.set_level:
  //             id: rack_fan_speed
  //             level: !lambda |-
  //               return x/100;
  //           type_id: output_setlevelaction_id_7
  //       type_id: ifaction_id_5
  //     automation_id: automation_id_8
  //     trigger_id: number_numberstatetrigger_id
  //   disabled_by_default: false
  //   update_interval: 60s
  //   initial_value: 0.0
  fan_speed_override = new template_::TemplateNumber();
  fan_speed_override->set_update_interval(60000);
  fan_speed_override->set_component_source("template.number");
  App.register_component(fan_speed_override);
  App.register_number(fan_speed_override);
  fan_speed_override->set_name("Fan Speed Override");
  fan_speed_override->set_object_id("fan_speed_override");
  fan_speed_override->set_disabled_by_default(false);
  fan_speed_override->set_internal(false);
  fan_speed_override->traits.set_min_value(0.0f);
  fan_speed_override->traits.set_max_value(100.0f);
  fan_speed_override->traits.set_step(33.3f);
  fan_speed_override->traits.set_mode(number::NUMBER_MODE_SLIDER);
  number_numberstatetrigger_id = new number::NumberStateTrigger(fan_speed_override);
  automation_id_8 = new Automation<float>(number_numberstatetrigger_id);
  fan_fanisoncondition_id = new fan::FanIsOnCondition<float>(rack_fan_toggle);
  ifaction_id_5 = new IfAction<float>(fan_fanisoncondition_id);
  output_setlevelaction_id_7 = new output::SetLevelAction<float>(rack_fan_speed);
  output_setlevelaction_id_7->set_level([=](float x) -> float {
      #line 158 "packages/fan_4_pin.yaml"
      return x/100;
  });
  ifaction_id_5->add_then({output_setlevelaction_id_7});
  automation_id_8->add_actions({ifaction_id_5});
  fan_speed_override->set_optimistic(true);
  fan_speed_override->set_initial_value(0.0f);
  // text_sensor.template:
  //   platform: template
  //   name: Breadboard Test Fan Uptime
  //   id: uptime_human
  //   icon: mdi:clock-start
  //   disabled_by_default: false
  //   update_interval: 60s
  uptime_human = new template_::TemplateTextSensor();
  App.register_text_sensor(uptime_human);
  uptime_human->set_name("Breadboard Test Fan Uptime");
  uptime_human->set_object_id("breadboard_test_fan_uptime");
  uptime_human->set_disabled_by_default(false);
  uptime_human->set_icon("mdi:clock-start");
  uptime_human->set_update_interval(60000);
  uptime_human->set_component_source("template.text_sensor");
  App.register_component(uptime_human);
  // switch.restart:
  //   platform: restart
  //   name: Rack Fan D1 Pro Mini Restart
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   id: restart_restartswitch_id
  //   entity_category: config
  //   icon: mdi:restart
  restart_restartswitch_id = new restart::RestartSwitch();
  App.register_switch(restart_restartswitch_id);
  restart_restartswitch_id->set_name("Rack Fan D1 Pro Mini Restart");
  restart_restartswitch_id->set_object_id("rack_fan_d1_pro_mini_restart");
  restart_restartswitch_id->set_disabled_by_default(false);
  restart_restartswitch_id->set_icon("mdi:restart");
  restart_restartswitch_id->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  restart_restartswitch_id->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  restart_restartswitch_id->set_component_source("restart.switch");
  App.register_component(restart_restartswitch_id);
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // md5:
  // socket:
  //   implementation: bsd_sockets
  fan_fanisoffcondition_id = new fan::FanIsOffCondition<float>(rack_fan_toggle);
  ifaction_id = new IfAction<float>(fan_fanisoffcondition_id);
  lambdaaction_id = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Set fan level 100 over 50C");
  });
  output_setlevelaction_id = new output::SetLevelAction<float>(rack_fan_speed);
  output_setlevelaction_id->set_level(1.0f);
  ifaction_id->add_then({lambdaaction_id, output_setlevelaction_id});
  automation_id->add_actions({ifaction_id});
  sensor_valuerangetrigger_id_2 = new sensor::ValueRangeTrigger(rack_fan_temperature);
  sensor_valuerangetrigger_id_2->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_2);
  sensor_valuerangetrigger_id_2->set_min(40.0f);
  automation_id_2 = new Automation<float>(sensor_valuerangetrigger_id_2);
  fan_fanisoffcondition_id_2 = new fan::FanIsOffCondition<float>(rack_fan_toggle);
  ifaction_id_2 = new IfAction<float>(fan_fanisoffcondition_id_2);
  lambdaaction_id_2 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Set fan level 66 over 40C");
  });
  output_setlevelaction_id_2 = new output::SetLevelAction<float>(rack_fan_speed);
  output_setlevelaction_id_2->set_level(0.66f);
  ifaction_id_2->add_then({lambdaaction_id_2, output_setlevelaction_id_2});
  automation_id_2->add_actions({ifaction_id_2});
  sensor_valuerangetrigger_id_3 = new sensor::ValueRangeTrigger(rack_fan_temperature);
  sensor_valuerangetrigger_id_3->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_3);
  sensor_valuerangetrigger_id_3->set_min(30.0f);
  automation_id_3 = new Automation<float>(sensor_valuerangetrigger_id_3);
  fan_fanisoffcondition_id_3 = new fan::FanIsOffCondition<float>(rack_fan_toggle);
  ifaction_id_3 = new IfAction<float>(fan_fanisoffcondition_id_3);
  lambdaaction_id_3 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Set fan level 33 over 30C");
  });
  output_setlevelaction_id_3 = new output::SetLevelAction<float>(rack_fan_speed);
  output_setlevelaction_id_3->set_level(0.33f);
  ifaction_id_3->add_then({lambdaaction_id_3, output_setlevelaction_id_3});
  automation_id_3->add_actions({ifaction_id_3});
  sensor_valuerangetrigger_id_4 = new sensor::ValueRangeTrigger(rack_fan_temperature);
  sensor_valuerangetrigger_id_4->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_4);
  sensor_valuerangetrigger_id_4->set_max(30.0f);
  automation_id_4 = new Automation<float>(sensor_valuerangetrigger_id_4);
  fan_fanisoffcondition_id_4 = new fan::FanIsOffCondition<float>(rack_fan_toggle);
  ifaction_id_4 = new IfAction<float>(fan_fanisoffcondition_id_4);
  lambdaaction_id_4 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Set fan level 0 under 30C");
  });
  output_setlevelaction_id_4 = new output::SetLevelAction<float>(rack_fan_speed);
  output_setlevelaction_id_4->set_level(0.0f);
  ifaction_id_4->add_then({lambdaaction_id_4, output_setlevelaction_id_4});
  automation_id_4->add_actions({ifaction_id_4});
  dht_dht_id->set_temperature_sensor(rack_fan_temperature);
  rack_fan_humidity = new sensor::Sensor();
  App.register_sensor(rack_fan_humidity);
  rack_fan_humidity->set_name("Humidity");
  rack_fan_humidity->set_object_id("humidity");
  rack_fan_humidity->set_disabled_by_default(false);
  rack_fan_humidity->set_device_class("humidity");
  rack_fan_humidity->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  rack_fan_humidity->set_unit_of_measurement("%");
  rack_fan_humidity->set_accuracy_decimals(0);
  rack_fan_humidity->set_force_update(false);
  dht_dht_id->set_humidity_sensor(rack_fan_humidity);
  dht_dht_id->set_dht_model(dht::DHT_MODEL_DHT11);
  text_sensor_textsensorpublishaction_id = new text_sensor::TextSensorPublishAction<float>(uptime_human);
  text_sensor_textsensorpublishaction_id->set_state([=](float x) -> std::string {
      #line 27 "packages/uptime_sensor.yaml"
      int seconds = round(uptime_raw->raw_state);
      int days = seconds / (24 * 3600);
      seconds = seconds % (24 * 3600);
      int hours = seconds / 3600;
      seconds = seconds % 3600;
      int minutes = seconds /  60;
      seconds = seconds % 60;
      return (
        (days ? to_string(days) + "d " : "") +
        (hours ? to_string(hours) + "h " : "") +
        (minutes ? to_string(minutes) + "m " : "") +
        (to_string(seconds) + "s")
      ).c_str();
  });
  automation_id_5->add_actions({text_sensor_textsensorpublishaction_id});
  uptime_human_readable->set_update_interval(60000);
  uptime_human_readable->set_component_source("uptime.sensor");
  App.register_component(uptime_human_readable);
  output_setlevelaction_id_5->set_level([=]() -> float {
      #line 122 "packages/fan_4_pin.yaml"
      return fan_speed_override->state/100.0;
  });
  automation_id_6->add_actions({output_setlevelaction_id_5});
  fan_fanturnofftrigger_id = new fan::FanTurnOffTrigger(rack_fan_toggle);
  automation_id_7 = new Automation<>(fan_fanturnofftrigger_id);
  lambdaaction_id_5 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Power of Fan turned OFF");
  });
  delayaction_id = new DelayAction<>();
  delayaction_id->set_component_source("fan");
  App.register_component(delayaction_id);
  delayaction_id->set_delay(1000);
  output_setlevelaction_id_6 = new output::SetLevelAction<>(rack_fan_speed);
  output_setlevelaction_id_6->set_level([=]() -> float {
      #line 129 "packages/fan_4_pin.yaml"
      if (rack_fan_temperature->raw_state > 50){
        return 1;}
      else if (rack_fan_temperature->raw_state > 40){
        return 0.66;}
      else if (rack_fan_temperature->raw_state > 30){
        return 0.33;}
      else
        return 0;
  });
  automation_id_7->add_actions({lambdaaction_id_5, delayaction_id, output_setlevelaction_id_6});
  speed_speedfan_id->set_output(rack_fan_speed);
  // globals:
  //   id: dhttemp
  //   type: float
  //   restore_value: true
  //   initial_value: '0'
  dhttemp = new globals::RestoringGlobalsComponent<float>(0);
  dhttemp->set_component_source("globals");
  App.register_component(dhttemp);
  dhttemp->set_name_hash(2218155625UL);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
