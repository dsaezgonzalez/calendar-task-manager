// Phase A0 build check: proves the toolchain, PSRAM and flash settings are correct.
// Replaced by the real boot sequence in Phase A3.
#include <Arduino.h>
#include "board_pins.h"

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Task Calendar firmware: build check");
  Serial.printf("Flash size : %u bytes\n", ESP.getFlashChipSize());
  Serial.printf("PSRAM size : %u bytes (expect ~8388608)\n", ESP.getPsramSize());
  Serial.printf("Free heap  : %u bytes\n", ESP.getFreeHeap());
}

void loop() {
  delay(1000);
}
