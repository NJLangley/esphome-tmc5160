// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace stepper;
using namespace cover;
using namespace sensor;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
ota::OTAStartTrigger *ota_otastarttrigger_id;
Automation<> *automation_id_16;
LambdaAction<> *lambdaaction_id_15;
ota::OTAProgressTrigger *ota_otaprogresstrigger_id;
Automation<float> *automation_id_17;
LambdaAction<float> *lambdaaction_id_16;
ota::OTAEndTrigger *ota_otaendtrigger_id;
Automation<> *automation_id_18;
LambdaAction<> *lambdaaction_id_17;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
api::UserServiceTrigger<int32_t> *api_userservicetrigger_id;
Automation<int32_t> *automation_id_2;
StartupTrigger *startuptrigger_id;
Automation<> *automation_id;
using namespace spi;
spi::SPIComponent *spi_spicomponent_id;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id_3;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id_2;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
tmc5160::TMC5160_Stepper *tmc_stepper;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id_4;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id_5;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_id_6;
stepper::SetTargetAction<int32_t> *stepper_settargetaction_id;
script::SingleScript<> *record_stepper_position;
script::SingleScript<int> *set_stepper_position;
script::SingleScript<> *publish_cover_position;
script::SingleScript<> *publish_cover_state;
script::SingleScript<> *monitor_cover_movement;
Automation<> *automation_id_7;
template_::TemplateCover *blind_cover;
Automation<> *automation_id_12;
LambdaAction<> *lambdaaction_id_6;
LambdaCondition<> *lambdacondition_id_4;
IfAction<> *ifaction_id_3;
template_::TemplateSensor *master_bedroom_window_blind_current_position;
template_::TemplateSensor *master_bedroom_window_blind_closed_position;
template_::TemplateSensor *master_bedroom_window_blind_opening_counter;
template_::TemplateSensor *master_bedroom_window_blind_closing_counter;
template_::TemplateSensor *master_bedroom_window_blind_opening_clutch_backlash_adjustment;
uptime::UptimeSecondsSensor *uptime_uptimesecondssensor_id;
script::ScriptExecuteAction<script::Script<>, int32_t> *script_scriptexecuteaction_id_3;
api::UserServiceTrigger<int32_t> *api_userservicetrigger_id_2;
Automation<int32_t> *automation_id_3;
globals::GlobalsComponent<int> *open_position;
globals::GlobalsComponent<int> *closed_position;
globals::RestoringGlobalsComponent<int> *saved_position;
globals::RestoringGlobalsComponent<int> *opening_counter;
globals::RestoringGlobalsComponent<int> *closing_counter;
globals::GlobalsComponent<int> *new_target_pos;
globals::RestoringGlobalsComponent<int> *opening_clutch_backlash_adjustment;
LambdaAction<> *lambdaaction_id_7;
stepper::SetTargetAction<> *stepper_settargetaction_id_2;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_11;
Automation<> *automation_id_13;
LambdaAction<> *lambdaaction_id_8;
stepper::SetTargetAction<> *stepper_settargetaction_id_3;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_12;
Automation<> *automation_id_15;
LambdaAction<> *lambdaaction_id_13;
LambdaAction<> *lambdaaction_id_14;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_14;
Automation<float> *automation_id_14;
LambdaAction<float> *lambdaaction_id_9;
LambdaAction<float> *lambdaaction_id_10;
LambdaCondition<float> *lambdacondition_id_5;
IfAction<float> *ifaction_id_5;
LambdaCondition<float> *lambdacondition_id_6;
IfAction<float> *ifaction_id_4;
LambdaAction<float> *lambdaaction_id_11;
LambdaAction<float> *lambdaaction_id_12;
stepper::SetTargetAction<float> *stepper_settargetaction_id_4;
script::ScriptExecuteAction<script::Script<>, float> *script_scriptexecuteaction_id_13;
script::ScriptExecuteAction<script::Script<int>> *script_scriptexecuteaction_id;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_2;
sensor::SensorPublishAction<> *sensor_sensorpublishaction_id;
sensor::SensorPublishAction<> *sensor_sensorpublishaction_id_2;
sensor::SensorPublishAction<> *sensor_sensorpublishaction_id_3;
sensor::SensorPublishAction<> *sensor_sensorpublishaction_id_4;
LambdaAction<int32_t> *lambdaaction_id;
api::UserServiceTrigger<int32_t> *api_userservicetrigger_id_3;
Automation<int32_t> *automation_id_4;
LambdaCondition<int32_t> *lambdacondition_id;
IfAction<int32_t> *ifaction_id;
api::HomeAssistantServiceCallAction<int32_t> *api_homeassistantservicecallaction_id;
script::ScriptExecuteAction<script::Script<int>, int32_t> *script_scriptexecuteaction_id_4;
script::ScriptExecuteAction<script::Script<>, int32_t> *script_scriptexecuteaction_id_5;
script::ScriptExecuteAction<script::Script<>, int32_t> *script_scriptexecuteaction_id_6;
api::UserServiceTrigger<> *api_userservicetrigger_id_4;
Automation<> *automation_id_5;
LambdaCondition<> *lambdacondition_id_2;
IfAction<> *ifaction_id_2;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_id_2;
LambdaAction<> *lambdaaction_id_2;
api::UserServiceTrigger<std::string> *api_userservicetrigger_id_5;
Automation<std::string> *automation_id_6;
LambdaAction<std::string> *lambdaaction_id_3;
api::HomeAssistantServiceCallAction<std::string> *api_homeassistantservicecallaction_id_3;
using namespace api;
globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>> *globals_globalvarsetaction_id;
Automation<int> *automation_id_8;
LambdaAction<int> *lambdaaction_id_4;
script::ScriptExecuteAction<script::Script<>, int> *script_scriptexecuteaction_id_7;
Automation<> *automation_id_9;
cover::CoverPublishAction<> *cover_coverpublishaction_id;
sensor::SensorPublishAction<> *sensor_sensorpublishaction_id_5;
Automation<> *automation_id_10;
LambdaAction<> *lambdaaction_id_5;
Automation<> *automation_id_11;
LambdaCondition<> *lambdacondition_id_3;
WhileAction<> *whileaction_id;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_8;
DelayAction<> *delayaction_id;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_9;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_10;
cover::CoverPublishAction<> *cover_coverpublishaction_id_2;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {255, 255, 255, 255, OUTPUT, OUTPUT, 255, 255, 255, 255, 255, 255, INPUT, OUTPUT, OUTPUT, OUTPUT};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0};
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esp8266:
  //   restore_from_flash: true
  //   board: d1_mini
  //   framework:
  //     version: 3.1.2
  //     source: ~3.30102.0
  //     platform_version: platformio/espressif8266@4.2.1
  //   early_pin_init: true
  //   board_flash_mode: dout
  esphome::esp8266::setup_preferences();
  // async_tcp:
  //   {}
  // esphome:
  //   name: master-bedroom-window-blind
  //   libraries:
  //   - SPI
  //   - tommag/TMC5160
  //   on_boot:
  //   - then:
  //     - script.execute:
  //         id: set_stepper_position
  //         position: !lambda |-
  //           return id(saved_position);
  //       type_id: script_scriptexecuteaction_id
  //     - script.execute:
  //         id: publish_cover_position
  //       type_id: script_scriptexecuteaction_id_2
  //     - sensor.template.publish:
  //         id: master_bedroom_window_blind_closed_position
  //         state: !lambda |-
  //           return id(closed_position);
  //       type_id: sensor_sensorpublishaction_id
  //     - sensor.template.publish:
  //         id: master_bedroom_window_blind_closing_counter
  //         state: !lambda |-
  //           return id(closing_counter);
  //       type_id: sensor_sensorpublishaction_id_2
  //     - sensor.template.publish:
  //         id: master_bedroom_window_blind_opening_counter
  //         state: !lambda |-
  //           return id(opening_counter);
  //       type_id: sensor_sensorpublishaction_id_3
  //     - sensor.template.publish:
  //         id: master_bedroom_window_blind_opening_clutch_backlash_adjustment
  //         state: !lambda |-
  //           return id(opening_clutch_backlash_adjustment);
  //       type_id: sensor_sensorpublishaction_id_4
  //     automation_id: automation_id
  //     trigger_id: startuptrigger_id
  //     priority: 600.0
  //   build_path: build/master-bedroom-window-blind
  //   friendly_name: ''
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.10.2
  App.pre_setup("master-bedroom-window-blind", "", "", "", __DATE__ ", " __TIME__, false);
  // stepper:
  // cover:
  // sensor:
  // logger:
  //   level: VERBOSE
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
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
  //   manual_ip:
  //     static_ip: !secret 'wifi_static_ip_master_bedroom_window_blind'
  //     gateway: !secret 'wifi_gateway'
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: '{master_bedroom_window_blind}'
  //     password: password
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_id_2
  //     priority: 0.0
  //   use_address: 192.168.66.29
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("192.168.66.29");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("My Minions");
  wifi_wifiap_id_2.set_password("cqE@&qxvAmm33Znr");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 66, 29),
      .gateway = network::IPAddress(192, 168, 66, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("{master_bedroom_window_blind}");
  wifi_wifiap_id.set_password("password");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_output_power(20.0f);
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
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_id_15
  //     automation_id: automation_id_16
  //     trigger_id: ota_otastarttrigger_id
  //   on_progress:
  //   - then:
  //     - logger.log:
  //         format: OTA progress %0.1f%%
  //         args:
  //         - !lambda |-
  //           x
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_id_16
  //     automation_id: automation_id_17
  //     trigger_id: ota_otaprogresstrigger_id
  //   on_end:
  //   - then:
  //     - logger.log:
  //         format: OTA end
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_id_17
  //     automation_id: automation_id_18
  //     trigger_id: ota_otaendtrigger_id
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 8266
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  ota_otastarttrigger_id = new ota::OTAStartTrigger(esphome_esphomeotacomponent_id);
  automation_id_16 = new Automation<>(ota_otastarttrigger_id);
  lambdaaction_id_15 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA start");
  });
  automation_id_16->add_actions({lambdaaction_id_15});
  ota_otaprogresstrigger_id = new ota::OTAProgressTrigger(esphome_esphomeotacomponent_id);
  automation_id_17 = new Automation<float>(ota_otaprogresstrigger_id);
  lambdaaction_id_16 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "OTA progress %0.1f%%", x);
  });
  automation_id_17->add_actions({lambdaaction_id_16});
  ota_otaendtrigger_id = new ota::OTAEndTrigger(esphome_esphomeotacomponent_id);
  automation_id_18 = new Automation<>(ota_otaendtrigger_id);
  lambdaaction_id_17 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA end");
  });
  automation_id_18->add_actions({lambdaaction_id_17});
  esphome_esphomeotacomponent_id->set_port(8266);
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
  // api:
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  //   actions:
  //   - variables:
  //       target: int
  //     then:
  //     - stepper.set_target:
  //         id: tmc_stepper
  //         target: !lambda |-
  //           return target;
  //       type_id: stepper_settargetaction_id
  //     - script.execute:
  //         id: monitor_cover_movement
  //       type_id: script_scriptexecuteaction_id_3
  //     automation_id: automation_id_2
  //     trigger_id: api_userservicetrigger_id
  //     action: set_stepper_target
  //   - variables:
  //       clutch_backlash_adjustment: int
  //     then:
  //     - lambda: !lambda |-
  //         id(opening_clutch_backlash_adjustment) = clutch_backlash_adjustment;
  //         id(master_bedroom_window_blind_opening_clutch_backlash_adjustment).publish_state(id(opening_counter));
  //       type_id: lambdaaction_id
  //     automation_id: automation_id_3
  //     trigger_id: api_userservicetrigger_id_2
  //     action: set_opening_clutch_backlash_adjustment
  //   - variables:
  //       position: int
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(tmc_stepper).get_is_driver_enabled();
  //           type_id: lambdacondition_id
  //         then:
  //         - homeassistant.service:
  //             data:
  //               message: Service set_stepper_position is not available while the blind
  //                 motor is moving. Please try again once the blind has stopped.
  //               logger: esphome.tmc5160
  //               level: error
  //             id: api_apiserver_id
  //             data_template: {}
  //             variables: {}
  //             action: system_log.write
  //           type_id: api_homeassistantservicecallaction_id
  //         else:
  //         - script.execute:
  //             id: set_stepper_position
  //             position: !lambda |-
  //               return position;
  //           type_id: script_scriptexecuteaction_id_4
  //         - script.execute:
  //             id: publish_cover_position
  //           type_id: script_scriptexecuteaction_id_5
  //         - script.execute:
  //             id: publish_cover_state
  //           type_id: script_scriptexecuteaction_id_6
  //       type_id: ifaction_id
  //     automation_id: automation_id_4
  //     trigger_id: api_userservicetrigger_id_3
  //     action: set_stepper_position
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(tmc_stepper).get_is_driver_enabled();
  //           type_id: lambdacondition_id_2
  //         then:
  //         - homeassistant.service:
  //             data:
  //               message: Service reset_counters is not available while the blind motor
  //                 is moving. Please try again once the blind has stopped.
  //               logger: esphome.tmc5160
  //               level: error
  //             id: api_apiserver_id
  //             data_template: {}
  //             variables: {}
  //             action: system_log.write
  //           type_id: api_homeassistantservicecallaction_id_2
  //         else:
  //         - lambda: !lambda |-
  //             id(opening_counter) = 0;
  //             id(master_bedroom_window_blind_opening_counter).publish_state(id(opening_counter));
  //   
  //             id(closing_counter) = 0;
  //             id(master_bedroom_window_blind_closing_counter).publish_state(id(closing_counter));
  //           type_id: lambdaaction_id_2
  //       type_id: ifaction_id_2
  //     automation_id: automation_id_5
  //     trigger_id: api_userservicetrigger_id_4
  //     variables: {}
  //     action: reset_counters
  //   - variables:
  //       message: string
  //     then:
  //     - lambda: !lambda |-
  //         static const char *const TAG = "tmc5160.stepper"; ESP_LOGI(TAG, "service call: log_message: %s", message);
  //       type_id: lambdaaction_id_3
  //     - homeassistant.service:
  //         data:
  //           message: !lambda |-
  //             return "service call: log_message: " + message;
  //           logger: esphome.tmc5160
  //           level: error
  //         id: api_apiserver_id
  //         data_template: {}
  //         variables: {}
  //         action: system_log.write
  //       type_id: api_homeassistantservicecallaction_id_3
  //     automation_id: automation_id_6
  //     trigger_id: api_userservicetrigger_id_5
  //     action: log_message
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_password("");
  api_apiserver_id->set_reboot_timeout(900000);
  api_userservicetrigger_id = new api::UserServiceTrigger<int32_t>("set_stepper_target", {"target"});
  api_apiserver_id->register_user_service(api_userservicetrigger_id);
  automation_id_2 = new Automation<int32_t>(api_userservicetrigger_id);
  startuptrigger_id = new StartupTrigger(600.0f);
  startuptrigger_id->set_component_source("esphome.coroutine");
  App.register_component(startuptrigger_id);
  automation_id = new Automation<>(startuptrigger_id);
  // spi:
  //   - clk_pin:
  //       number: 14
  //       mode:
  //         output: true
  //         input: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //         analog: false
  //       id: esphome_esp8266_esp8266gpiopin_id
  //       inverted: false
  //     mosi_pin:
  //       number: 13
  //       mode:
  //         output: true
  //         input: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //         analog: false
  //       id: esphome_esp8266_esp8266gpiopin_id_2
  //       inverted: false
  //     miso_pin:
  //       number: 12
  //       mode:
  //         input: true
  //         output: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //         analog: false
  //       id: esphome_esp8266_esp8266gpiopin_id_3
  //       inverted: false
  //     id: spi_spicomponent_id
  //     interface: any
  //     type: single
  //     interface_index: 0
  spi_spicomponent_id = new spi::SPIComponent();
  spi_spicomponent_id->set_component_source("spi");
  App.register_component(spi_spicomponent_id);
  esphome_esp8266_esp8266gpiopin_id = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id->set_pin(14);
  esphome_esp8266_esp8266gpiopin_id->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  spi_spicomponent_id->set_clk(esphome_esp8266_esp8266gpiopin_id);
  esphome_esp8266_esp8266gpiopin_id_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id_3->set_pin(12);
  esphome_esp8266_esp8266gpiopin_id_3->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_id_3->set_flags(gpio::Flags::FLAG_INPUT);
  spi_spicomponent_id->set_miso(esphome_esp8266_esp8266gpiopin_id_3);
  esphome_esp8266_esp8266gpiopin_id_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id_2->set_pin(13);
  esphome_esp8266_esp8266gpiopin_id_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  spi_spicomponent_id->set_mosi(esphome_esp8266_esp8266gpiopin_id_2);
  spi_spicomponent_id->set_interface(&SPI);
  spi_spicomponent_id->set_interface_name("SPI");
  // substitutions:
  //   device_name: master-bedroom-window-blind
  //   friendly_name: Master Bedroom Window Blind
  //   node_name: master_bedroom_window_blind
  //   wifi_static_ip: !secret 'wifi_static_ip_master_bedroom_window_blind'
  //   closed_position: '4400'
  //   opening_clutch_backlash_adjustment: '0'
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // stepper.tmc5160:
  //   platform: tmc5160
  //   id: tmc_stepper
  //   cs_pin:
  //     number: 15
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //       analog: false
  //     id: esphome_esp8266_esp8266gpiopin_id_4
  //     inverted: false
  //   sleep_pin:
  //     number: 4
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //       analog: false
  //     id: esphome_esp8266_esp8266gpiopin_id_5
  //     inverted: false
  //   reset_pin:
  //     number: 5
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //       analog: false
  //     id: esphome_esp8266_esp8266gpiopin_id_6
  //     inverted: false
  //   current_resistor: 0.075
  //   motor_current: 1.68
  //   motor_hold_power: 0.3
  //   max_speed: 2000.0
  //   acceleration: 1600.0
  //   deceleration: 1600.0
  //   direction: normal
  //   disable_driver_on_stop: true
  tmc_stepper = new tmc5160::TMC5160_Stepper();
  tmc_stepper->set_component_source("tmc5160.stepper");
  App.register_component(tmc_stepper);
  tmc_stepper->set_acceleration(1600.0f);
  tmc_stepper->set_deceleration(1600.0f);
  tmc_stepper->set_max_speed(2000.0f);
  esphome_esp8266_esp8266gpiopin_id_4 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id_4->set_pin(15);
  esphome_esp8266_esp8266gpiopin_id_4->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_id_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  tmc_stepper->set_cs_pin(esphome_esp8266_esp8266gpiopin_id_4);
  esphome_esp8266_esp8266gpiopin_id_5 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id_5->set_pin(4);
  esphome_esp8266_esp8266gpiopin_id_5->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_id_5->set_flags(gpio::Flags::FLAG_OUTPUT);
  tmc_stepper->set_sleep_pin(esphome_esp8266_esp8266gpiopin_id_5);
  esphome_esp8266_esp8266gpiopin_id_6 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_id_6->set_pin(5);
  esphome_esp8266_esp8266gpiopin_id_6->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_id_6->set_flags(gpio::Flags::FLAG_OUTPUT);
  tmc_stepper->set_reset_pin(esphome_esp8266_esp8266gpiopin_id_6);
  tmc_stepper->set_current_resistor(0.075f);
  tmc_stepper->set_motor_current(1.68f);
  tmc_stepper->set_motor_hold_power(0.3f);
  tmc_stepper->set_disable_driver_when_stopped(true);
  tmc_stepper->set_motor_direction_reversed(false);
  stepper_settargetaction_id = new stepper::SetTargetAction<int32_t>(tmc_stepper);
  stepper_settargetaction_id->set_target([=](int32_t target) -> int32_t {
      #line 35 "packages/roller_blind.yaml"
      return target;
  });
  // script:
  //   - id: record_stepper_position
  //     then:
  //     - globals.set:
  //         id: saved_position
  //         value: !lambda |-
  //           return id(tmc_stepper).current_position;
  //       type_id: globals_globalvarsetaction_id
  //     trigger_id: trigger_id
  //     automation_id: automation_id_7
  //     mode: single
  //     parameters: {}
  //   - id: set_stepper_position
  //     parameters:
  //       position: int
  //     then:
  //     - lambda: !lambda |-
  //         id(tmc_stepper).set_position(position);
  //       type_id: lambdaaction_id_4
  //     - script.execute:
  //         id: record_stepper_position
  //       type_id: script_scriptexecuteaction_id_7
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_8
  //     mode: single
  //   - id: publish_cover_position
  //     then:
  //     - cover.template.publish:
  //         id: blind_cover
  //         position: !lambda |-
  //           return float( float(id(tmc_stepper).current_position) - float(id(closed_position))) / float( float(id(open_position)) - float(id(closed_position)) );
  //       type_id: cover_coverpublishaction_id
  //     - sensor.template.publish:
  //         id: master_bedroom_window_blind_current_position
  //         state: !lambda |-
  //           return id(tmc_stepper).current_position;
  //       type_id: sensor_sensorpublishaction_id_5
  //     trigger_id: trigger_id_3
  //     automation_id: automation_id_9
  //     mode: single
  //     parameters: {}
  //   - id: publish_cover_state
  //     then:
  //     - lambda: !lambda |-
  //         CoverOperation current_operation = id(blind_cover).current_operation;
  //         if (id(tmc_stepper).has_reached_target() && id(blind_cover).current_operation != COVER_OPERATION_IDLE) {
  //           id(blind_cover).current_operation = COVER_OPERATION_IDLE;
  //           id(blind_cover).publish_state();
  //         }
  //         else if (id(tmc_stepper).get_speed() > 0 && id(blind_cover).current_operation != COVER_OPERATION_CLOSING) {
  //           id(blind_cover).current_operation = COVER_OPERATION_CLOSING;
  //           id(blind_cover).publish_state();
  //   
  //           id(closing_counter)++;
  //           id(master_bedroom_window_blind_closing_counter).publish_state(id(closing_counter));
  //         }
  //         else if (id(tmc_stepper).get_speed() < 0 && id(blind_cover).current_operation != COVER_OPERATION_OPENING) {
  //           id(blind_cover).current_operation = COVER_OPERATION_OPENING;
  //           id(blind_cover).publish_state();
  //   
  //           id(opening_counter)++;
  //           id(master_bedroom_window_blind_opening_counter).publish_state(id(opening_counter));
  //         }
  //       type_id: lambdaaction_id_5
  //     trigger_id: trigger_id_4
  //     automation_id: automation_id_10
  //     mode: single
  //     parameters: {}
  //   - id: monitor_cover_movement
  //     then:
  //     - while:
  //         condition:
  //           lambda: !lambda |-
  //             return !id(tmc_stepper).has_reached_target();
  //           type_id: lambdacondition_id_3
  //         then:
  //         - script.execute:
  //             id: publish_cover_state
  //           type_id: script_scriptexecuteaction_id_8
  //         - delay: 250ms
  //           type_id: delayaction_id
  //       type_id: whileaction_id
  //     - script.execute:
  //         id: publish_cover_position
  //       type_id: script_scriptexecuteaction_id_9
  //     - script.execute:
  //         id: record_stepper_position
  //       type_id: script_scriptexecuteaction_id_10
  //     - cover.template.publish:
  //         id: blind_cover
  //         current_operation: IDLE
  //       type_id: cover_coverpublishaction_id_2
  //     trigger_id: trigger_id_5
  //     automation_id: automation_id_11
  //     mode: single
  //     parameters: {}
  record_stepper_position = new script::SingleScript<>();
  record_stepper_position->set_name("record_stepper_position");
  set_stepper_position = new script::SingleScript<int>();
  set_stepper_position->set_name("set_stepper_position");
  publish_cover_position = new script::SingleScript<>();
  publish_cover_position->set_name("publish_cover_position");
  publish_cover_state = new script::SingleScript<>();
  publish_cover_state->set_name("publish_cover_state");
  monitor_cover_movement = new script::SingleScript<>();
  monitor_cover_movement->set_name("monitor_cover_movement");
  automation_id_7 = new Automation<>(record_stepper_position);
  // cover.template:
  //   platform: template
  //   id: blind_cover
  //   device_class: blind
  //   name: Master Bedroom Window Blind
  //   has_position: true
  //   optimistic: false
  //   open_action:
  //     then:
  //     - logger.log:
  //         format: Opening
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_id_6
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return !id(tmc_stepper).get_is_driver_enabled();
  //           type_id: lambdacondition_id_4
  //         then:
  //         - lambda: !lambda |-
  //             int adjusted_pos = id(tmc_stepper).current_position + id(opening_clutch_backlash_adjustment);
  //             id(tmc_stepper).set_position(adjusted_pos);
  //           type_id: lambdaaction_id_7
  //       type_id: ifaction_id_3
  //     - stepper.set_target:
  //         id: tmc_stepper
  //         target: !lambda |-
  //           return id(open_position);
  //       type_id: stepper_settargetaction_id_2
  //     - script.execute:
  //         id: monitor_cover_movement
  //       type_id: script_scriptexecuteaction_id_11
  //     trigger_id: trigger_id_6
  //     automation_id: automation_id_12
  //   close_action:
  //     then:
  //     - logger.log:
  //         format: Closing
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_id_8
  //     - stepper.set_target:
  //         id: tmc_stepper
  //         target: !lambda |-
  //           return id(closed_position);
  //       type_id: stepper_settargetaction_id_3
  //     - script.execute:
  //         id: monitor_cover_movement
  //       type_id: script_scriptexecuteaction_id_12
  //     trigger_id: trigger_id_7
  //     automation_id: automation_id_13
  //   position_action:
  //     then:
  //     - logger.log:
  //         format: Setting position
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_id_9
  //     - lambda: !lambda |-
  //         id(new_target_pos) = (float(pos) * float( float(id(open_position)) - float(id(closed_position)) )) + float(id(closed_position));
  //       type_id: lambdaaction_id_10
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return !id(tmc_stepper).get_is_driver_enabled();
  //           type_id: lambdacondition_id_5
  //         then:
  //         - if:
  //             condition:
  //               lambda: !lambda |-
  //                 return id(new_target_pos) < id(tmc_stepper).current_position;
  //               type_id: lambdacondition_id_6
  //             then:
  //             - logger.log:
  //                 format: Adjusting target for clutch backlash
  //                 level: DEBUG
  //                 args: []
  //                 tag: main
  //               type_id: lambdaaction_id_11
  //             - lambda: !lambda |-
  //                 int adjusted_pos = id(tmc_stepper).current_position + id(opening_clutch_backlash_adjustment);
  //                 id(tmc_stepper).set_position(adjusted_pos);
  //               type_id: lambdaaction_id_12
  //           type_id: ifaction_id_4
  //       type_id: ifaction_id_5
  //     - stepper.set_target:
  //         id: tmc_stepper
  //         target: !lambda |-
  //           return id(new_target_pos);
  //       type_id: stepper_settargetaction_id_4
  //     - script.execute:
  //         id: monitor_cover_movement
  //       type_id: script_scriptexecuteaction_id_13
  //     trigger_id: trigger_id_8
  //     automation_id: automation_id_14
  //   stop_action:
  //     then:
  //     - logger.log:
  //         format: Stopping
  //         level: DEBUG
  //         args: []
  //         tag: main
  //       type_id: lambdaaction_id_13
  //     - lambda: !lambda |-
  //         id(tmc_stepper).stop();
  //       type_id: lambdaaction_id_14
  //     - script.execute:
  //         id: monitor_cover_movement
  //       type_id: script_scriptexecuteaction_id_14
  //     trigger_id: trigger_id_9
  //     automation_id: automation_id_15
  //   disabled_by_default: false
  //   assumed_state: false
  //   restore_mode: RESTORE
  blind_cover = new template_::TemplateCover();
  blind_cover->set_component_source("template.cover");
  App.register_component(blind_cover);
  App.register_cover(blind_cover);
  blind_cover->set_name("Master Bedroom Window Blind");
  blind_cover->set_object_id("master_bedroom_window_blind");
  blind_cover->set_disabled_by_default(false);
  blind_cover->set_device_class("blind");
  automation_id_12 = new Automation<>(blind_cover->get_open_trigger());
  lambdaaction_id_6 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Opening");
  });
  lambdacondition_id_4 = new LambdaCondition<>([=]() -> bool {
      #line 211 "packages/roller_blind.yaml"
      return !tmc_stepper->get_is_driver_enabled();
  });
  ifaction_id_3 = new IfAction<>(lambdacondition_id_4);
  // sensor.template:
  //   platform: template
  //   id: master_bedroom_window_blind_current_position
  //   name: Master Bedroom Window Blind Current position
  //   lambda: !lambda |-
  //     return id(tmc_stepper).current_position;
  //   update_interval: 4294967295
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  master_bedroom_window_blind_current_position = new template_::TemplateSensor();
  App.register_sensor(master_bedroom_window_blind_current_position);
  master_bedroom_window_blind_current_position->set_name("Master Bedroom Window Blind Current position");
  master_bedroom_window_blind_current_position->set_object_id("master_bedroom_window_blind_current_position");
  master_bedroom_window_blind_current_position->set_disabled_by_default(false);
  master_bedroom_window_blind_current_position->set_accuracy_decimals(1);
  master_bedroom_window_blind_current_position->set_force_update(false);
  master_bedroom_window_blind_current_position->set_update_interval(4294967295UL);
  master_bedroom_window_blind_current_position->set_component_source("template.sensor");
  App.register_component(master_bedroom_window_blind_current_position);
  master_bedroom_window_blind_current_position->set_template([=]() -> optional<float> {
      #line 259 "packages/roller_blind.yaml"
      return tmc_stepper->current_position;
  });
  // sensor.template:
  //   platform: template
  //   id: master_bedroom_window_blind_closed_position
  //   name: Master Bedroom Window Blind Closed position
  //   lambda: !lambda |-
  //     return id(closed_position);
  //   update_interval: 4294967295
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  master_bedroom_window_blind_closed_position = new template_::TemplateSensor();
  App.register_sensor(master_bedroom_window_blind_closed_position);
  master_bedroom_window_blind_closed_position->set_name("Master Bedroom Window Blind Closed position");
  master_bedroom_window_blind_closed_position->set_object_id("master_bedroom_window_blind_closed_position");
  master_bedroom_window_blind_closed_position->set_disabled_by_default(false);
  master_bedroom_window_blind_closed_position->set_accuracy_decimals(1);
  master_bedroom_window_blind_closed_position->set_force_update(false);
  master_bedroom_window_blind_closed_position->set_update_interval(4294967295UL);
  master_bedroom_window_blind_closed_position->set_component_source("template.sensor");
  App.register_component(master_bedroom_window_blind_closed_position);
  // sensor.template:
  //   platform: template
  //   id: master_bedroom_window_blind_opening_counter
  //   name: Master Bedroom Window Blind Opening Counter
  //   lambda: !lambda |-
  //     return id(opening_counter);
  //   update_interval: 4294967295
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  master_bedroom_window_blind_opening_counter = new template_::TemplateSensor();
  App.register_sensor(master_bedroom_window_blind_opening_counter);
  master_bedroom_window_blind_opening_counter->set_name("Master Bedroom Window Blind Opening Counter");
  master_bedroom_window_blind_opening_counter->set_object_id("master_bedroom_window_blind_opening_counter");
  master_bedroom_window_blind_opening_counter->set_disabled_by_default(false);
  master_bedroom_window_blind_opening_counter->set_accuracy_decimals(1);
  master_bedroom_window_blind_opening_counter->set_force_update(false);
  master_bedroom_window_blind_opening_counter->set_update_interval(4294967295UL);
  master_bedroom_window_blind_opening_counter->set_component_source("template.sensor");
  App.register_component(master_bedroom_window_blind_opening_counter);
  // sensor.template:
  //   platform: template
  //   id: master_bedroom_window_blind_closing_counter
  //   name: Master Bedroom Window Blind Closing Counter
  //   lambda: !lambda |-
  //     return id(closing_counter);
  //   update_interval: 4294967295
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  master_bedroom_window_blind_closing_counter = new template_::TemplateSensor();
  App.register_sensor(master_bedroom_window_blind_closing_counter);
  master_bedroom_window_blind_closing_counter->set_name("Master Bedroom Window Blind Closing Counter");
  master_bedroom_window_blind_closing_counter->set_object_id("master_bedroom_window_blind_closing_counter");
  master_bedroom_window_blind_closing_counter->set_disabled_by_default(false);
  master_bedroom_window_blind_closing_counter->set_accuracy_decimals(1);
  master_bedroom_window_blind_closing_counter->set_force_update(false);
  master_bedroom_window_blind_closing_counter->set_update_interval(4294967295UL);
  master_bedroom_window_blind_closing_counter->set_component_source("template.sensor");
  App.register_component(master_bedroom_window_blind_closing_counter);
  // sensor.template:
  //   platform: template
  //   id: master_bedroom_window_blind_opening_clutch_backlash_adjustment
  //   name: Master Bedroom Window Blind Opening Clutch Backlash Adjustment
  //   lambda: !lambda |-
  //     return id(opening_clutch_backlash_adjustment);
  //   update_interval: 4294967295
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  master_bedroom_window_blind_opening_clutch_backlash_adjustment = new template_::TemplateSensor();
  App.register_sensor(master_bedroom_window_blind_opening_clutch_backlash_adjustment);
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_name("Master Bedroom Window Blind Opening Clutch Backlash Adjustment");
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_object_id("master_bedroom_window_blind_opening_clutch_backlash_adjustment");
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_disabled_by_default(false);
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_accuracy_decimals(1);
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_force_update(false);
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_update_interval(4294967295UL);
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_component_source("template.sensor");
  App.register_component(master_bedroom_window_blind_opening_clutch_backlash_adjustment);
  // sensor.uptime:
  //   platform: uptime
  //   name: Uptime Sensor
  //   disabled_by_default: false
  //   force_update: false
  //   id: uptime_uptimesecondssensor_id
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  //   device_class: duration
  //   state_class: total_increasing
  //   entity_category: diagnostic
  //   update_interval: 60s
  //   type: seconds
  uptime_uptimesecondssensor_id = new uptime::UptimeSecondsSensor();
  App.register_sensor(uptime_uptimesecondssensor_id);
  uptime_uptimesecondssensor_id->set_name("Uptime Sensor");
  uptime_uptimesecondssensor_id->set_object_id("uptime_sensor");
  uptime_uptimesecondssensor_id->set_disabled_by_default(false);
  uptime_uptimesecondssensor_id->set_icon("mdi:timer-outline");
  uptime_uptimesecondssensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  uptime_uptimesecondssensor_id->set_device_class("duration");
  uptime_uptimesecondssensor_id->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_uptimesecondssensor_id->set_unit_of_measurement("s");
  uptime_uptimesecondssensor_id->set_accuracy_decimals(0);
  uptime_uptimesecondssensor_id->set_force_update(false);
  uptime_uptimesecondssensor_id->set_update_interval(60000);
  uptime_uptimesecondssensor_id->set_component_source("uptime.sensor");
  App.register_component(uptime_uptimesecondssensor_id);
  // socket:
  //   implementation: lwip_tcp
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // md5:
  script_scriptexecuteaction_id_3 = new script::ScriptExecuteAction<script::Script<>, int32_t>(monitor_cover_movement);
  script_scriptexecuteaction_id_3->set_args();
  automation_id_2->add_actions({stepper_settargetaction_id, script_scriptexecuteaction_id_3});
  api_userservicetrigger_id_2 = new api::UserServiceTrigger<int32_t>("set_opening_clutch_backlash_adjustment", {"clutch_backlash_adjustment"});
  api_apiserver_id->register_user_service(api_userservicetrigger_id_2);
  automation_id_3 = new Automation<int32_t>(api_userservicetrigger_id_2);
  // globals:
  //   id: open_position
  //   type: int
  //   initial_value: '0'
  //   restore_value: false
  open_position = new globals::GlobalsComponent<int>(0);
  open_position->set_component_source("globals");
  App.register_component(open_position);
  // globals:
  //   id: closed_position
  //   type: int
  //   initial_value: '4400'
  //   restore_value: false
  closed_position = new globals::GlobalsComponent<int>(4400);
  closed_position->set_component_source("globals");
  App.register_component(closed_position);
  // globals:
  //   id: saved_position
  //   type: int
  //   initial_value: '0'
  //   restore_value: true
  saved_position = new globals::RestoringGlobalsComponent<int>(0);
  saved_position->set_component_source("globals");
  App.register_component(saved_position);
  saved_position->set_name_hash(1301523107);
  // globals:
  //   id: opening_counter
  //   type: int
  //   initial_value: '0'
  //   restore_value: true
  opening_counter = new globals::RestoringGlobalsComponent<int>(0);
  opening_counter->set_component_source("globals");
  App.register_component(opening_counter);
  opening_counter->set_name_hash(1017949023);
  // globals:
  //   id: closing_counter
  //   type: int
  //   initial_value: '0'
  //   restore_value: true
  closing_counter = new globals::RestoringGlobalsComponent<int>(0);
  closing_counter->set_component_source("globals");
  App.register_component(closing_counter);
  closing_counter->set_name_hash(1807495996);
  // globals:
  //   id: new_target_pos
  //   type: int
  //   initial_value: '0'
  //   restore_value: false
  new_target_pos = new globals::GlobalsComponent<int>(0);
  new_target_pos->set_component_source("globals");
  App.register_component(new_target_pos);
  // globals:
  //   id: opening_clutch_backlash_adjustment
  //   type: int
  //   initial_value: '0'
  //   restore_value: true
  opening_clutch_backlash_adjustment = new globals::RestoringGlobalsComponent<int>(0);
  opening_clutch_backlash_adjustment->set_component_source("globals");
  App.register_component(opening_clutch_backlash_adjustment);
  opening_clutch_backlash_adjustment->set_name_hash(3683403255UL);
  lambdaaction_id_7 = new LambdaAction<>([=]() -> void {
      #line 213 "packages/roller_blind.yaml"
      int adjusted_pos = tmc_stepper->current_position + opening_clutch_backlash_adjustment->value();
      tmc_stepper->set_position(adjusted_pos);
  });
  ifaction_id_3->add_then({lambdaaction_id_7});
  stepper_settargetaction_id_2 = new stepper::SetTargetAction<>(tmc_stepper);
  stepper_settargetaction_id_2->set_target([=]() -> int32_t {
      #line 217 "packages/roller_blind.yaml"
      return open_position->value();
  });
  script_scriptexecuteaction_id_11 = new script::ScriptExecuteAction<script::Script<>>(monitor_cover_movement);
  script_scriptexecuteaction_id_11->set_args();
  automation_id_12->add_actions({lambdaaction_id_6, ifaction_id_3, stepper_settargetaction_id_2, script_scriptexecuteaction_id_11});
  automation_id_13 = new Automation<>(blind_cover->get_close_trigger());
  lambdaaction_id_8 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Closing");
  });
  stepper_settargetaction_id_3 = new stepper::SetTargetAction<>(tmc_stepper);
  stepper_settargetaction_id_3->set_target([=]() -> int32_t {
      #line 223 "packages/roller_blind.yaml"
      return closed_position->value();
  });
  script_scriptexecuteaction_id_12 = new script::ScriptExecuteAction<script::Script<>>(monitor_cover_movement);
  script_scriptexecuteaction_id_12->set_args();
  automation_id_13->add_actions({lambdaaction_id_8, stepper_settargetaction_id_3, script_scriptexecuteaction_id_12});
  automation_id_15 = new Automation<>(blind_cover->get_stop_trigger());
  lambdaaction_id_13 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Stopping");
  });
  lambdaaction_id_14 = new LambdaAction<>([=]() -> void {
      #line 251 "packages/roller_blind.yaml"
      tmc_stepper->stop();
  });
  script_scriptexecuteaction_id_14 = new script::ScriptExecuteAction<script::Script<>>(monitor_cover_movement);
  script_scriptexecuteaction_id_14->set_args();
  automation_id_15->add_actions({lambdaaction_id_13, lambdaaction_id_14, script_scriptexecuteaction_id_14});
  blind_cover->set_has_stop(true);
  automation_id_14 = new Automation<float>(blind_cover->get_position_trigger());
  lambdaaction_id_9 = new LambdaAction<float>([=](float pos) -> void {
      ESP_LOGD("main", "Setting position");
  });
  lambdaaction_id_10 = new LambdaAction<float>([=](float pos) -> void {
      #line 228 "packages/roller_blind.yaml"
      new_target_pos->value() = (float(pos) * float( float(open_position->value()) - float(closed_position->value()) )) + float(closed_position->value());
  });
  lambdacondition_id_5 = new LambdaCondition<float>([=](float pos) -> bool {
      #line 233 "packages/roller_blind.yaml"
      return !tmc_stepper->get_is_driver_enabled();
  });
  ifaction_id_5 = new IfAction<float>(lambdacondition_id_5);
  lambdacondition_id_6 = new LambdaCondition<float>([=](float pos) -> bool {
      #line 236 "packages/roller_blind.yaml"
      return new_target_pos->value() < tmc_stepper->current_position;
  });
  ifaction_id_4 = new IfAction<float>(lambdacondition_id_6);
  lambdaaction_id_11 = new LambdaAction<float>([=](float pos) -> void {
      ESP_LOGD("main", "Adjusting target for clutch backlash");
  });
  lambdaaction_id_12 = new LambdaAction<float>([=](float pos) -> void {
      #line 240 "packages/roller_blind.yaml"
      int adjusted_pos = tmc_stepper->current_position + opening_clutch_backlash_adjustment->value();
      tmc_stepper->set_position(adjusted_pos);
  });
  ifaction_id_4->add_then({lambdaaction_id_11, lambdaaction_id_12});
  ifaction_id_5->add_then({ifaction_id_4});
  stepper_settargetaction_id_4 = new stepper::SetTargetAction<float>(tmc_stepper);
  stepper_settargetaction_id_4->set_target([=](float pos) -> int32_t {
      #line 247 "packages/roller_blind.yaml"
      return new_target_pos->value();
  });
  script_scriptexecuteaction_id_13 = new script::ScriptExecuteAction<script::Script<>, float>(monitor_cover_movement);
  script_scriptexecuteaction_id_13->set_args();
  automation_id_14->add_actions({lambdaaction_id_9, lambdaaction_id_10, ifaction_id_5, stepper_settargetaction_id_4, script_scriptexecuteaction_id_13});
  blind_cover->set_has_position(true);
  blind_cover->set_optimistic(false);
  blind_cover->set_assumed_state(false);
  blind_cover->set_restore_mode(template_::COVER_RESTORE);
  blind_cover->set_has_position(true);
  master_bedroom_window_blind_closed_position->set_template([=]() -> optional<float> {
      #line 265 "packages/roller_blind.yaml"
      return closed_position->value();
  });
  master_bedroom_window_blind_opening_counter->set_template([=]() -> optional<float> {
      #line 271 "packages/roller_blind.yaml"
      return opening_counter->value();
  });
  master_bedroom_window_blind_closing_counter->set_template([=]() -> optional<float> {
      #line 277 "packages/roller_blind.yaml"
      return closing_counter->value();
  });
  master_bedroom_window_blind_opening_clutch_backlash_adjustment->set_template([=]() -> optional<float> {
      #line 283 "packages/roller_blind.yaml"
      return opening_clutch_backlash_adjustment->value();
  });
  script_scriptexecuteaction_id = new script::ScriptExecuteAction<script::Script<int>>(set_stepper_position);
  script_scriptexecuteaction_id->set_args([=]() -> int {
      #line 9 "packages/roller_blind.yaml"
      return saved_position->value();
  });
  script_scriptexecuteaction_id_2 = new script::ScriptExecuteAction<script::Script<>>(publish_cover_position);
  script_scriptexecuteaction_id_2->set_args();
  sensor_sensorpublishaction_id = new sensor::SensorPublishAction<>(master_bedroom_window_blind_closed_position);
  sensor_sensorpublishaction_id->set_state([=]() -> float {
      #line 14 "packages/roller_blind.yaml"
      return closed_position->value();
  });
  sensor_sensorpublishaction_id_2 = new sensor::SensorPublishAction<>(master_bedroom_window_blind_closing_counter);
  sensor_sensorpublishaction_id_2->set_state([=]() -> float {
      #line 17 "packages/roller_blind.yaml"
      return closing_counter->value();
  });
  sensor_sensorpublishaction_id_3 = new sensor::SensorPublishAction<>(master_bedroom_window_blind_opening_counter);
  sensor_sensorpublishaction_id_3->set_state([=]() -> float {
      #line 20 "packages/roller_blind.yaml"
      return opening_counter->value();
  });
  sensor_sensorpublishaction_id_4 = new sensor::SensorPublishAction<>(master_bedroom_window_blind_opening_clutch_backlash_adjustment);
  sensor_sensorpublishaction_id_4->set_state([=]() -> float {
      #line 23 "packages/roller_blind.yaml"
      return opening_clutch_backlash_adjustment->value();
  });
  automation_id->add_actions({script_scriptexecuteaction_id, script_scriptexecuteaction_id_2, sensor_sensorpublishaction_id, sensor_sensorpublishaction_id_2, sensor_sensorpublishaction_id_3, sensor_sensorpublishaction_id_4});
  lambdaaction_id = new LambdaAction<int32_t>([=](int32_t clutch_backlash_adjustment) -> void {
      #line 44 "packages/roller_blind.yaml"
      opening_clutch_backlash_adjustment->value() = clutch_backlash_adjustment;
      master_bedroom_window_blind_opening_clutch_backlash_adjustment->publish_state(opening_counter->value());
  });
  automation_id_3->add_actions({lambdaaction_id});
  api_userservicetrigger_id_3 = new api::UserServiceTrigger<int32_t>("set_stepper_position", {"position"});
  api_apiserver_id->register_user_service(api_userservicetrigger_id_3);
  automation_id_4 = new Automation<int32_t>(api_userservicetrigger_id_3);
  lambdacondition_id = new LambdaCondition<int32_t>([=](int32_t position) -> bool {
      #line 55 "packages/roller_blind.yaml"
      return tmc_stepper->get_is_driver_enabled();
  });
  ifaction_id = new IfAction<int32_t>(lambdacondition_id);
  api_homeassistantservicecallaction_id = new api::HomeAssistantServiceCallAction<int32_t>(api_apiserver_id, false);
  api_homeassistantservicecallaction_id->set_service("system_log.write");
  api_homeassistantservicecallaction_id->add_data("message", "Service set_stepper_position is not available while the blind motor is moving. Please try again once the blind has stopped.");
  api_homeassistantservicecallaction_id->add_data("logger", "esphome.tmc5160");
  api_homeassistantservicecallaction_id->add_data("level", "error");
  ifaction_id->add_then({api_homeassistantservicecallaction_id});
  script_scriptexecuteaction_id_4 = new script::ScriptExecuteAction<script::Script<int>, int32_t>(set_stepper_position);
  script_scriptexecuteaction_id_4->set_args([=](int32_t position) -> int {
      #line 65 "packages/roller_blind.yaml"
      return position;
  });
  script_scriptexecuteaction_id_5 = new script::ScriptExecuteAction<script::Script<>, int32_t>(publish_cover_position);
  script_scriptexecuteaction_id_5->set_args();
  script_scriptexecuteaction_id_6 = new script::ScriptExecuteAction<script::Script<>, int32_t>(publish_cover_state);
  script_scriptexecuteaction_id_6->set_args();
  ifaction_id->add_else({script_scriptexecuteaction_id_4, script_scriptexecuteaction_id_5, script_scriptexecuteaction_id_6});
  automation_id_4->add_actions({ifaction_id});
  api_userservicetrigger_id_4 = new api::UserServiceTrigger<>("reset_counters", {});
  api_apiserver_id->register_user_service(api_userservicetrigger_id_4);
  automation_id_5 = new Automation<>(api_userservicetrigger_id_4);
  lambdacondition_id_2 = new LambdaCondition<>([=]() -> bool {
      #line 75 "packages/roller_blind.yaml"
      return tmc_stepper->get_is_driver_enabled();
  });
  ifaction_id_2 = new IfAction<>(lambdacondition_id_2);
  api_homeassistantservicecallaction_id_2 = new api::HomeAssistantServiceCallAction<>(api_apiserver_id, false);
  api_homeassistantservicecallaction_id_2->set_service("system_log.write");
  api_homeassistantservicecallaction_id_2->add_data("message", "Service reset_counters is not available while the blind motor is moving. Please try again once the blind has stopped.");
  api_homeassistantservicecallaction_id_2->add_data("logger", "esphome.tmc5160");
  api_homeassistantservicecallaction_id_2->add_data("level", "error");
  ifaction_id_2->add_then({api_homeassistantservicecallaction_id_2});
  lambdaaction_id_2 = new LambdaAction<>([=]() -> void {
      #line 84 "packages/roller_blind.yaml"
      opening_counter->value() = 0;
      master_bedroom_window_blind_opening_counter->publish_state(opening_counter->value());
      
      closing_counter->value() = 0;
      master_bedroom_window_blind_closing_counter->publish_state(closing_counter->value());
  });
  ifaction_id_2->add_else({lambdaaction_id_2});
  automation_id_5->add_actions({ifaction_id_2});
  api_userservicetrigger_id_5 = new api::UserServiceTrigger<std::string>("log_message", {"message"});
  api_apiserver_id->register_user_service(api_userservicetrigger_id_5);
  automation_id_6 = new Automation<std::string>(api_userservicetrigger_id_5);
  lambdaaction_id_3 = new LambdaAction<std::string>([=](std::string message) -> void {
      #line 96 "packages/roller_blind.yaml"
      static const char *const TAG = "tmc5160.stepper"; ESP_LOGI(TAG, "service call: log_message: %s", message);
  });
  api_homeassistantservicecallaction_id_3 = new api::HomeAssistantServiceCallAction<std::string>(api_apiserver_id, false);
  api_homeassistantservicecallaction_id_3->set_service("system_log.write");
  api_homeassistantservicecallaction_id_3->add_data("message", [=](std::string message) {
      #line 101 "packages/roller_blind.yaml"
      return "service call: log_message: " + message;
  });
  api_homeassistantservicecallaction_id_3->add_data("logger", "esphome.tmc5160");
  api_homeassistantservicecallaction_id_3->add_data("level", "error");
  automation_id_6->add_actions({lambdaaction_id_3, api_homeassistantservicecallaction_id_3});
  globals_globalvarsetaction_id = new globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>>(saved_position);
  globals_globalvarsetaction_id->set_value([=]() {
      #line 110 "packages/roller_blind.yaml"
      return tmc_stepper->current_position;
  });
  automation_id_7->add_actions({globals_globalvarsetaction_id});
  automation_id_8 = new Automation<int>(set_stepper_position);
  lambdaaction_id_4 = new LambdaAction<int>([=](int position) -> void {
      #line 116 "packages/roller_blind.yaml"
      tmc_stepper->set_position(position);
  });
  script_scriptexecuteaction_id_7 = new script::ScriptExecuteAction<script::Script<>, int>(record_stepper_position);
  script_scriptexecuteaction_id_7->set_args();
  automation_id_8->add_actions({lambdaaction_id_4, script_scriptexecuteaction_id_7});
  automation_id_9 = new Automation<>(publish_cover_position);
  cover_coverpublishaction_id = new cover::CoverPublishAction<>(blind_cover);
  cover_coverpublishaction_id->set_position([=]() -> float {
      #line 124 "packages/roller_blind.yaml"
      return float( float(tmc_stepper->current_position) - float(closed_position->value())) / float( float(open_position->value()) - float(closed_position->value()) );
  });
  sensor_sensorpublishaction_id_5 = new sensor::SensorPublishAction<>(master_bedroom_window_blind_current_position);
  sensor_sensorpublishaction_id_5->set_state([=]() -> float {
      #line 127 "packages/roller_blind.yaml"
      return tmc_stepper->current_position;
  });
  automation_id_9->add_actions({cover_coverpublishaction_id, sensor_sensorpublishaction_id_5});
  automation_id_10 = new Automation<>(publish_cover_state);
  lambdaaction_id_5 = new LambdaAction<>([=]() -> void {
      #line 131 "packages/roller_blind.yaml"
      CoverOperation current_operation = blind_cover->current_operation;
      if (tmc_stepper->has_reached_target() && blind_cover->current_operation != COVER_OPERATION_IDLE) {
        blind_cover->current_operation = COVER_OPERATION_IDLE;
        blind_cover->publish_state();
      }
      else if (tmc_stepper->get_speed() > 0 && blind_cover->current_operation != COVER_OPERATION_CLOSING) {
        blind_cover->current_operation = COVER_OPERATION_CLOSING;
        blind_cover->publish_state();\
      
        closing_counter->value()++;
        master_bedroom_window_blind_closing_counter->publish_state(closing_counter->value());
      }
      else if (tmc_stepper->get_speed() < 0 && blind_cover->current_operation != COVER_OPERATION_OPENING) {
        blind_cover->current_operation = COVER_OPERATION_OPENING;
        blind_cover->publish_state();
      
        opening_counter->value()++;
        master_bedroom_window_blind_opening_counter->publish_state(opening_counter->value());
      }
  });
  automation_id_10->add_actions({lambdaaction_id_5});
  automation_id_11 = new Automation<>(monitor_cover_movement);
  lambdacondition_id_3 = new LambdaCondition<>([=]() -> bool {
      #line 158 "packages/roller_blind.yaml"
      return !tmc_stepper->has_reached_target();
  });
  whileaction_id = new WhileAction<>(lambdacondition_id_3);
  script_scriptexecuteaction_id_8 = new script::ScriptExecuteAction<script::Script<>>(publish_cover_state);
  script_scriptexecuteaction_id_8->set_args();
  delayaction_id = new DelayAction<>();
  delayaction_id->set_component_source("script");
  App.register_component(delayaction_id);
  delayaction_id->set_delay(250);
  whileaction_id->add_then({script_scriptexecuteaction_id_8, delayaction_id});
  script_scriptexecuteaction_id_9 = new script::ScriptExecuteAction<script::Script<>>(publish_cover_position);
  script_scriptexecuteaction_id_9->set_args();
  script_scriptexecuteaction_id_10 = new script::ScriptExecuteAction<script::Script<>>(record_stepper_position);
  script_scriptexecuteaction_id_10->set_args();
  cover_coverpublishaction_id_2 = new cover::CoverPublishAction<>(blind_cover);
  cover_coverpublishaction_id_2->set_current_operation(cover::COVER_OPERATION_IDLE);
  automation_id_11->add_actions({whileaction_id, script_scriptexecuteaction_id_9, script_scriptexecuteaction_id_10, cover_coverpublishaction_id_2});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
