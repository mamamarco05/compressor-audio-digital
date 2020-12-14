/* *********************************************************************** */
/* File name:        Led.cpp                                               */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use LEDS                             */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

/* includes */
#include "Arduino.h"
#include "Led.h"

Led::Led(int iPin){
    _iPin = iPin;  
}

/* ************************************************ */
/* Method name:        led_init                     */
/* Method description: Initialize the LED device    */
/* Input params:       n/a                          */
/* Output params:      n/a                          */
/* ************************************************ */
void Led::led_init(){
    pinMode(_iPin, OUTPUT);
}

/* ************************************************ */
/* Method name:        led_set                      */
/* Method description: Set status of specified LED  */
/* Input params:       bStatus                      */
/* Output params:      n/a                          */
/* ************************************************ */
void Led::led_set(bool bStatus)
{
    digitalWrite(_iPin, bStatus);
}