#ifndef UNIT_TEST  // IMPORTANT LINE!

#include <Arduino.h>
#include <ESPectro.h>

#define LED_PIN 15
ESPectro board (ESPectro_V3);

void setup()
{
  // initialize LED digital pin as an output.
  board.turnOffAllNeopixel();
  board.turnOffLED();
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN, LOW);
   // wait for a second
  delay(1000);
}

#endif    // IMPORTANT LINE!

