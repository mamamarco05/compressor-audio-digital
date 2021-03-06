/* *********************************************************************** */
/* File name:        Led.h                                                 */
/* File description: Header file containing the prototypes of the functions*/
/*                   used to configure and use LEDS                        */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

#ifndef _LED_H
#define _LED_H

/* includes */
#include "Arduino.h"

/* definitions */

/* class */
class Led
{
    private:
        int _iPin;  

    public:

        Led(int iPin);

        /* ************************************************ */
        /* Method name:        led_init                     */
        /* Method description: Initialize the LED device    */
        /* Input params:       n/a                          */
        /* Output params:      n/a                          */
        /* ************************************************ */
        void led_init();

        /* ************************************************ */
        /* Method name:        led_set                      */
        /* Method description: Set status of specified LED  */
        /* Input params:       bStatus                      */
        /* Output params:      n/a                          */
        /* ************************************************ */
        void led_set(bool bStatus);      
};

#endif //_LED_H