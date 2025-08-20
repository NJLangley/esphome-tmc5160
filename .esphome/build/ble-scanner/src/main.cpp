// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace sensor;
logger::Logger *logger_logger_id;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
uptime::UptimeSecondsSensor *uptime_uptimesecondssensor_id;
esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker_id;
esp32_ble::ESP32BLE *esp32_ble_esp32ble_id;
esp32_ble_tracker::ESPBTAdvertiseTrigger *esp32_ble_tracker_espbtadvertisetrigger_id;
Automation<const esp32_ble_tracker::ESPBTDevice &> *automation_id;
globals::GlobalsComponent<std::vector<std::string>> *discovered_devices;
LambdaAction<const esp32_ble_tracker::ESPBTDevice &> *lambdaaction_id;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
#include "ble_scanner_includes.h"
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esphome:
  //   name: ble-scanner
  //   includes:
  //   - ble_scanner_includes.h
  //   build_path: build/ble-scanner
  //   friendly_name: ''
  //   area: ''
  //   platformio_options: {}
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.10.2
  App.pre_setup("ble-scanner", "", "", "", __DATE__ ", " __TIME__, false);
  // sensor:
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
  // substitutions:
  //   device_name: ble-scanner
  //   friendly_name: Bluetooth LE Scanner
  //   node_name: ble_scanner
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
  //   on_ble_advertise:
  //   - then:
  //     - lambda: !lambda |-
  //         auto start = id(discovered_devices).begin();
  //         auto end = id(discovered_devices).end();
  //         std::string address = x.address_str();
  //   
  //         auto it = std::find(start, end, address);
  //   
  //         if (it == end) {
  //           id(discovered_devices).push_back(address);
  //   
  //           ESP_LOGW("ble_adv", "New BLE device");
  //           ESP_LOGW("ble_adv", "  Unique Device Count: %i", id(discovered_devices).size());
  //           ESP_LOGI("ble_adv", "  address: %s", address.c_str());
  //           ESP_LOGI("ble_adv", "  name: %s", x.get_name().c_str());
  //           ESP_LOGI("ble_adv", "  Advertised service UUIDs:");
  //           for (auto uuid : x.get_service_uuids()) {
  //               ESP_LOGI("ble_adv", "    - %s", uuid.to_string().c_str());
  //           }
  //           ESP_LOGI("ble_adv", "  Advertised service data:");
  //           for (auto data : x.get_service_datas()) {
  //               ESP_LOGI("ble_adv", "    - %s: (length %i)", data.uuid.to_string().c_str(), data.data.size());
  //   
  //               std::ostringstream ss;
  //               for (int i : data.data)
  //                 ss << " " << std::setfill('0') << std::setw(2) << std::hex << i;
  //               std::string data_hex_string = ss.str();
  //               ESP_LOGI("ble_adv", "    - data: 0x%s", data_hex_string.c_str());
  //           }
  //           ESP_LOGI("ble_adv", "  Advertised manufacturer data:");
  //           for (auto data : x.get_manufacturer_datas()) {
  //               ESP_LOGI("ble_adv", "    - %s: (length %i)", data.uuid.to_string().c_str(), data.data.size());
  //   
  //               std::ostringstream ss;
  //               for (int i : data.data)
  //                 ss << " " << std::setfill('0') << std::setw(2) << std::hex << i;
  //               std::string data_hex_string = ss.str();
  //               ESP_LOGI("ble_adv", "    - data: 0x%s", data_hex_string.c_str());
  //           }
  //         }
  //       type_id: lambdaaction_id
  //     automation_id: automation_id
  //     trigger_id: esp32_ble_tracker_espbtadvertisetrigger_id
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
  esp32_ble_tracker_espbtadvertisetrigger_id = new esp32_ble_tracker::ESPBTAdvertiseTrigger(esp32_ble_tracker_esp32bletracker_id);
  automation_id = new Automation<const esp32_ble_tracker::ESPBTDevice &>(esp32_ble_tracker_espbtadvertisetrigger_id);
  // globals:
  //   id: discovered_devices
  //   type: std::vector<std::string>
  //   restore_value: false
  discovered_devices = new globals::GlobalsComponent<std::vector<std::string>>();
  discovered_devices->set_component_source("globals");
  App.register_component(discovered_devices);
  lambdaaction_id = new LambdaAction<const esp32_ble_tracker::ESPBTDevice &>([=](const esp32_ble_tracker::ESPBTDevice & x) -> void {
      #line 26 "ble_scanner.yaml"
      auto start = discovered_devices->value().begin();
      auto end = discovered_devices->value().end();
      std::string address = x.address_str();
      
      auto it = std::find(start, end, address);
      
      if (it == end) {
        discovered_devices->value().push_back(address);
      
        ESP_LOGW("ble_adv", "New BLE device");
        ESP_LOGW("ble_adv", "  Unique Device Count: %i", discovered_devices->value().size());
        ESP_LOGI("ble_adv", "  address: %s", address.c_str());
        ESP_LOGI("ble_adv", "  name: %s", x.get_name().c_str());
        ESP_LOGI("ble_adv", "  Advertised service UUIDs:");
        for (auto uuid : x.get_service_uuids()) {
            ESP_LOGI("ble_adv", "    - %s", uuid.to_string().c_str());
        }
        ESP_LOGI("ble_adv", "  Advertised service data:");
        for (auto data : x.get_service_datas()) {
            ESP_LOGI("ble_adv", "    - %s: (length %i)", data.uuid.to_string().c_str(), data.data.size());
      
            std::ostringstream ss;
            for (int i : data.data)
              ss << " " << std::setfill('0') << std::setw(2) << std::hex << i;
            std::string data_hex_string = ss.str();
            ESP_LOGI("ble_adv", "    - data: 0x%s", data_hex_string.c_str());
        }
        ESP_LOGI("ble_adv", "  Advertised manufacturer data:");
        for (auto data : x.get_manufacturer_datas()) {
            ESP_LOGI("ble_adv", "    - %s: (length %i)", data.uuid.to_string().c_str(), data.data.size());
      
            std::ostringstream ss;
            for (int i : data.data)
              ss << " " << std::setfill('0') << std::setw(2) << std::hex << i;
            std::string data_hex_string = ss.str();
            ESP_LOGI("ble_adv", "    - data: 0x%s", data_hex_string.c_str());
        }
      }
  });
  automation_id->add_actions({lambdaaction_id});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
