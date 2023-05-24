#include <Arduino.h>

#define LED_PIN 2
#define SW 1

void setup() {
  Serial.begin(9600);
  
  pinMode(LED_PIN, OUTPUT);
  pinMode(SW, INPUT);

  Serial.print("Hello NodeMcu32S\n");
  Serial.print("Start LED Blink\n");
}

void loop() {
  Serial.print("LED_ON\n");
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  Serial.print("LED_OFF\n");
  digitalWrite(LED_PIN, LOW);
  delay(500);
}