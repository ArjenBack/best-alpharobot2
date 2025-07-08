#include <Wire.h>

byte PCF8574Read();

void setup() {
    Wire.begin();
    Serial.begin(115200);
    Serial.println("Tiago is Spanish");
}

void loop() {
  value = PCF8574Read() | 0xE0;

  if (value == 0xEF) {
    Serial.println("Emergency? Really, I am the best driver.");
    stay()
  }
}
