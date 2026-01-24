#include <SPI.h>
#include <LoRa.h>
#include "BmeLora.h"

void setup() {
  Serial.begin(115200);
  Serial.println("LoRa Sender");
  
  initOLED();
  initBmeLora();
  initSensor();
}

void loop() {
#if defined(ESP32) && (ESP32 == 1)
  delay(3000);
#endif
  setAndSendLoraPacket();
}