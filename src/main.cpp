#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("\n--- NodeMCU ESP8266 Initialized ---");
}

void loop() {
  // บอร์ด ESP8266 ไฟ Onboard (LED_BUILTIN) ทำงานแบบ Active-LOW
  digitalWrite(LED_BUILTIN, LOW);   // สั่งเปิดไฟ
  Serial.println("ไฟติด (LED ON)");
  delay(5000);

  digitalWrite(LED_BUILTIN, HIGH);  // สั่งปิดไฟ
  Serial.println("ไฟดับ (LED OFF)");
  delay(5000);
}
