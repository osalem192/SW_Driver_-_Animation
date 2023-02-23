/*
 * Button_Driver.h
 *
 * Created: 2/10/2023 6:27:27 PM
 *  Author: osale
 */ 
#include "STD_TYPE.h"


#ifndef BUTTON_DRIVER_H_
#define BUTTON_DRIVER_H_

uint8 Button_Init(uint8 port, uint8 pinnum);
uint8 Button_state(uint8 port, uint8 pinnum);
uint8 Button_Port_Init(uint8 port);


#endif /* BUTTON_DRIVER_H_ */