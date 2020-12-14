#include <Arduino.h>
#include "Switch.h"
#include "Led.h"

#define LED_PIN        2

#define SWITCH_PIN     4
#define SWITCH_NBUTTON 1

Led led(LED_PIN);
Switch botao(SWITCH_PIN, SWITCH_NBUTTON);

void setup(){
    led.led_init();
    botao.switch_init();
}

void loop(){
    delay(1);
    if(botao.switch_read() == 1){
        led.led_set(HIGH);
    } else if(botao.switch_read() == 0){
        led.led_set(LOW);
    }
}