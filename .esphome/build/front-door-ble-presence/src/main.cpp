// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace sensor;
using namespace binary_sensor;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
ota::OTAStartTrigger *ota_otastarttrigger_id;
Automation<> *automation_id;
LambdaAction<> *lambdaaction_id;
ota::OTAProgressTrigger *ota_otaprogresstrigger_id;
Automation<float> *automation_id_2;
LambdaAction<float> *lambdaaction_id_2;
ota::OTAEndTrigger *ota_otaendtrigger_id;
Automation<> *automation_id_3;
LambdaAction<> *lambdaaction_id_3;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
using namespace api;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
uptime::UptimeSecondsSensor *uptime_uptimesecondssensor_id;
esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker_id;
ble_presence::BLEPresenceDevice *ble_presence_blepresencedevice_id;
ble_presence::BLEPresenceDevice *ble_presence_blepresencedevice_id_2;
esp32_ble::ESP32BLE *esp32_ble_esp32ble_id;
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
  //   name: front-door-ble-presence
  //   build_path: build/front-door-ble-presence
  //   friendly_name: ''
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.10.2
  App.pre_setup("front-door-ble-presence", "", "", "", __DATE__ ", " __TIME__, false);
  // sensor:
  // binary_sensor:
  // logger:
  //   level: INFO
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   logs: {}
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
  //     static_ip: !secret 'wifi_static_ip_front_door_ble_tracker'
  //     gateway: !secret 'wifi_gateway'
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: '{front_door_ble_presence}-test'
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
  //   use_address: 192.168.66.26
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("192.168.66.26");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("My Minions");
  wifi_wifiap_id_2.set_password("cqE@&qxvAmm33Znr");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 66, 26),
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
  wifi_wifiap_id.set_ssid("{front_door_ble_presence}-test");
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
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_id
  //     automation_id: automation_id
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
  //       type_id: lambdaaction_id_2
  //     automation_id: automation_id_2
  //     trigger_id: ota_otaprogresstrigger_id
  //   on_end:
  //   - then:
  //     - logger.log:
  //         format: OTA end
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_id_3
  //     automation_id: automation_id_3
  //     trigger_id: ota_otaendtrigger_id
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  ota_otastarttrigger_id = new ota::OTAStartTrigger(esphome_esphomeotacomponent_id);
  automation_id = new Automation<>(ota_otastarttrigger_id);
  lambdaaction_id = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA start");
  });
  automation_id->add_actions({lambdaaction_id});
  ota_otaprogresstrigger_id = new ota::OTAProgressTrigger(esphome_esphomeotacomponent_id);
  automation_id_2 = new Automation<float>(ota_otaprogresstrigger_id);
  lambdaaction_id_2 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "OTA progress %0.1f%%", x);
  });
  automation_id_2->add_actions({lambdaaction_id_2});
  ota_otaendtrigger_id = new ota::OTAEndTrigger(esphome_esphomeotacomponent_id);
  automation_id_3 = new Automation<>(ota_otaendtrigger_id);
  lambdaaction_id_3 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "OTA end");
  });
  automation_id_3->add_actions({lambdaaction_id_3});
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
  // api:
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_password("");
  api_apiserver_id->set_reboot_timeout(900000);
  // substitutions:
  //   device_name: front-door-ble-presence
  //   friendly_name: Front Door Bluetooth LE Presence Detector
  //   node_name: front_door_ble_presence
  //   wifi_static_ip: !secret 'wifi_static_ip_front_door_ble_tracker'
  // esp32:
  //   board: az-delivery-devkit-v4
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
  // esp32_ble_tracker:
  //   id: esp32_ble_tracker_esp32bletracker_id
  //   ble_id: esp32_ble_esp32ble_id
  //   scan_parameters:
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //     active: true
  //     continuous: true
  esp32_ble_tracker_esp32bletracker_id = new esp32_ble_tracker::ESP32BLETracker();
  esp32_ble_tracker_esp32bletracker_id->set_component_source("esp32_ble_tracker");
  App.register_component(esp32_ble_tracker_esp32bletracker_id);
  // binary_sensor.ble_presence:
  //   platform: ble_presence
  //   mac_address: 70:B9:50:D3:9C:45
  //   name: ESP32 BLE Tracker Tesla
  //   disabled_by_default: false
  //   id: ble_presence_blepresencedevice_id
  //   timeout: 5min
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  ble_presence_blepresencedevice_id = new ble_presence::BLEPresenceDevice();
  App.register_binary_sensor(ble_presence_blepresencedevice_id);
  ble_presence_blepresencedevice_id->set_name("ESP32 BLE Tracker Tesla");
  ble_presence_blepresencedevice_id->set_object_id("esp32_ble_tracker_tesla");
  ble_presence_blepresencedevice_id->set_disabled_by_default(false);
  ble_presence_blepresencedevice_id->set_component_source("ble_presence.binary_sensor");
  App.register_component(ble_presence_blepresencedevice_id);
  esp32_ble_tracker_esp32bletracker_id->register_listener(ble_presence_blepresencedevice_id);
  ble_presence_blepresencedevice_id->set_timeout(300000);
  ble_presence_blepresencedevice_id->set_address(0x70B950D39C45ULL);
  // binary_sensor.ble_presence:
  //   platform: ble_presence
  //   mac_address: B0:99:D7:BD:C1:B1
  //   name: ESP32 BLE Tracker Samsung TV
  //   disabled_by_default: false
  //   id: ble_presence_blepresencedevice_id_2
  //   timeout: 5min
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  ble_presence_blepresencedevice_id_2 = new ble_presence::BLEPresenceDevice();
  App.register_binary_sensor(ble_presence_blepresencedevice_id_2);
  ble_presence_blepresencedevice_id_2->set_name("ESP32 BLE Tracker Samsung TV");
  ble_presence_blepresencedevice_id_2->set_object_id("esp32_ble_tracker_samsung_tv");
  ble_presence_blepresencedevice_id_2->set_disabled_by_default(false);
  ble_presence_blepresencedevice_id_2->set_component_source("ble_presence.binary_sensor");
  App.register_component(ble_presence_blepresencedevice_id_2);
  esp32_ble_tracker_esp32bletracker_id->register_listener(ble_presence_blepresencedevice_id_2);
  ble_presence_blepresencedevice_id_2->set_timeout(300000);
  ble_presence_blepresencedevice_id_2->set_address(0xB099D7BDC1B1ULL);
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // md5:
  // socket:
  //   implementation: bsd_sockets
  // esp32_ble:
  //   id: esp32_ble_esp32ble_id
  //   io_capability: none
  //   enable_on_boot: true
  //   advertising_cycle_time: 10s
  esp32_ble_esp32ble_id = new esp32_ble::ESP32BLE();
  esp32_ble_esp32ble_id->set_enable_on_boot(true);
  esp32_ble_esp32ble_id->set_io_capability(esp32_ble::IO_CAP_NONE);
  esp32_ble_esp32ble_id->set_advertising_cycle_time(10000);
  esp32_ble_esp32ble_id->set_component_source("esp32_ble");
  App.register_component(esp32_ble_esp32ble_id);
  esp32_ble_esp32ble_id->register_gap_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_gattc_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_ble_status_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_tracker_esp32bletracker_id->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_tracker_esp32bletracker_id->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker_id->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker_id->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker_id->set_scan_active(true);
  esp32_ble_tracker_esp32bletracker_id->set_scan_continuous(true);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
