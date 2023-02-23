/*
 * LED.c
 *
 * Created: 2/10/2023 4:12:12 PM
 *  Author: osale
 */ 
#include "GPIO_DRIVER.h"
void LED_Init(uint8 port, uint8 pinnum)
{
	Set_Pin_Dir(port, pinnum, 1);
}

void LED_Write(uint8 port, uint8 pinnum,uint8 dir)
{
	Pin_Write(port, pinnum, dir);
}

void LED_Toggle(uint8 port, uint8 pinnum)
{
	Pin_Toggle(port, pinnum);
}

void LED_Port_Init(uint8 port)
{
	Set_Port_Dir(port, 1);
}

void LED_Port_Write(uint8 port,uint8 dir)
{
	Port_Write(port, dir);
}
