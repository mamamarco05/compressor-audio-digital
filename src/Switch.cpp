/* *********************************************************************** */
/* File name:        Switch.cpp                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use switches                         */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

/* includes */
#include "Switch.h"

/* functions */


Switch::Switch(int iPin, int nButton){
    _iPin    = iPin;    
    _nButton = nButton;
}

void Switch::switch_init(){
    pinMode(_iPin, INPUT_PULLUP);
}

int Switch::switch_read(){
    _sButton = digitalRead(_iPin);

    return _sButton;
}

