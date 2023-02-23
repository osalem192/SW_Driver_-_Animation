/*
 * LED.h
 *
 * Created: 2/10/2023 4:12:26 PM
 *  Author: osale
 */ 

#ifndef LED_H_
#define LED_H_

void LED_Init(uint8 port, uint8 pinnum);
void LED_Write(uint8 port, uint8 pinnum,uint8 dir);
void LED_Toggle(uint8 port, uint8 pinnum);
void LED_Port_Init(uint8 port);
void LED_Port_Write(uint8 port,uint8 dir);

#endif