#include <Arduino.h>

#define LED_BUILTIN 2

void blink(uint8_t x, uint y);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink(LED_BUILTIN, 500);
}

// put function definitions here:
void blink(uint8_t pin, uint time) {
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(time);
}