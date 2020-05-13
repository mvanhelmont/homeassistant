// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: meektest
  //   platform: ESP8266
  //   board: esp01_1m
  //   esp8266_restore_from_flash: false
  //   libraries: []
  //   platformio_options: {}
  //   board_flash_mode: dout
  //   includes: []
  //   arduino_version: espressif8266@2.2.3
  //   build_path: meektest
  App.pre_setup("meektest", __DATE__ ", " __TIME__);
  // logger:
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   esp8266_store_log_strings_in_flash: true
  //   baud_rate: 115200
  //   level: DEBUG
  //   logs: {}
  //   id: logger_logger
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: Meektest Fallback Hotspot
  //     password: ByW7Io8ZJoU2
  //     ap_timeout: 1min
  //     id: wifi_wifiap
  //   domain: .local
  //   output_power: 20.0
  //   fast_connect: false
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   id: wifi_wificomponent
  //   networks:
  //   - ssid: Oudenes.Photography
  //     password: Abercrombie1977
  //     priority: 0.0
  //     id: wifi_wifiap_2
  //   use_address: meektest.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("meektest.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("Oudenes.Photography");
  wifi_wifiap_2.set_password("Abercrombie1977");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Meektest Fallback Hotspot");
  wifi_wifiap.set_password("ByW7Io8ZJoU2");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: ''
  //   port: 8266
  //   safe_mode: true
  //   id: ota_otacomponent
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("");
  App.register_component(ota_otacomponent);
  ota_otacomponent->start_safe_mode();
  // api:
  //   password: ''
  //   port: 6053
  //   reboot_timeout: 15min
  //   id: api_apiserver
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
