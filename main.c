/*
 * main.c
 *
 * Created: 2/10/2023 6:26:07 PM
 *  Author: osale
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include <xc.h>
#include "Button_Driver.h"
#include "LED_APPS.h"
int main(void)
{
	Button_Port_Init('c');
	Internal_Port_PullUp_en('c');
	LED_Port_Init('a');
	
	while(1)
	{
		if (Button_state('c',0) == 0) Flash('a');
		if (Button_state('c',1) == 0) LED_Sl('a');
		if (Button_state('c',2) == 0) LED_Sr('a');
		if (Button_state('c',3) == 0) Ping_Pong('a');
		if (Button_state('c',4) == 0) Diverge('a');
		if (Button_state('c',5) == 0) Converge('a');
		if (Button_state('c',6) == 0) Conv_Div('a');
		if (Button_state('c',7) == 0) Snake('a');
		
	}
}