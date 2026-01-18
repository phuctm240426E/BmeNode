//Incuding arduino default SPI library
#include <SPI.h>
//Incuding LoRa library
#include <LoRa.h>
#include "BmeLora.h"

void setup() {
  //initialize Serial Monitor
  Serial.begin(115200);
  
  Serial.println("LoRa Sender");
  
  initBmeLora();
}

void loop() {
  delay(3000);

  setAndSendLoraPacket();
}