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

void Led::led_init(){
    pinMode(_iPin, OUTPUT);
}

void Led::led_set(bool bStatus)
{
    digitalWrite(_iPin, bStatus);
}