#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include "Switch.h"
#include "Led.h"

#define LED_PIN        2

#define SWITCH_PIN     4
#define SWITCH_NBUTTON 1

//variaveis que indicam o núcleo
static uint8_t taskCoreZero = 0;
static uint8_t taskCoreOne  = 1;

Led led(LED_PIN);
Switch botao(SWITCH_PIN, SWITCH_NBUTTON);
LiquidCrystal_I2C lcd(0x27, 20, 4);

void coreTaskZero( void * pvParameters ){
    while(1){
    delay(500);
    led.led_set(HIGH);
    delay(500);
    led.led_set(LOW);
    }
}

void coreTaskOne( void * pvParameters ){
    while(1){
    Serial.println(botao.switch_read());
    delay(1);
    }
}

void setup(){
    Serial.begin(11520);
    delay(1000);
    lcd.begin(19, 23);
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Oi Pirata:");
    led.led_init();
    botao.switch_init();

     xTaskCreatePinnedToCore(
                    coreTaskZero,   /* função que implementa a tarefa */
                    "coreTaskZero", /* nome da tarefa */
                    10000,      /* número de palavras a serem alocadas para uso com a pilha da tarefa */
                    NULL,       /* parâmetro de entrada para a tarefa (pode ser NULL) */
                    1,          /* prioridade da tarefa (0 a N) */
                    NULL,       /* referência para a tarefa (pode ser NULL) */
                    taskCoreZero);         /* Núcleo que executará a tarefa */

    delay(500); //tempo para a tarefa iniciar  

    xTaskCreatePinnedToCore(
                    coreTaskOne,   /* função que implementa a tarefa */
                    "coreTaskOne", /* nome da tarefa */
                    10000,      /* número de palavras a serem alocadas para uso com a pilha da tarefa */
                    NULL,       /* parâmetro de entrada para a tarefa (pode ser NULL) */
                    1,          /* prioridade da tarefa (0 a N) */
                    NULL,       /* referência para a tarefa (pode ser NULL) */
                    taskCoreOne);         /* Núcleo que executará a tarefa */
    delay(500); //tempo para a tarefa iniciar 
}

void loop(){
}