#include <Arduino.h>
#include "Led.h"

#define LED_PIN 2

Led led(LED_PIN);

void setup(){
    led.led_init();
}

void loop(){
    led.led_set(HIGH);
    delay(1000);
    led.led_set(LOW);
    delay(1000);
}