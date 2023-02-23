/*
 * LED_APPS.c
 *
 *  Author: omar salem
 */ 
# define F_CPU  8000000ul
#include "STD_TYPE.h"
#include <util/delay.h>

void Flash(uint8 port)
{
	LED_Port_Write(port,0xff);
	_delay_ms(1000);
	LED_Port_Write(port,0);
	_delay_ms(1000);
}

void LED_Sl(uint8 port)
{	uint8 i;
	for(i=0; i<8; i++)
	{
		Pin_Write(port,i,1);
		_delay_ms(250);
		Pin_Write(port,i,0);
		_delay_ms(250);
	}
}

void LED_Sr(uint8 port)
{	uint8 i;
	for(i=8; i>0; i--)
	{
		Pin_Write(port,i-1,1);
		_delay_ms(250);
		Pin_Write(port,i-1,0);
		_delay_ms(250);
	}
}

void Ping_Pong(uint8 port)
{	uint8 i;
	for (i=0; i<8; i++)
	{
		LED_Write(port,i, 1);
		_delay_ms(250);
	}
	for (i; i>0; i--)
	{
		LED_Write(port,i-1, 0);
		_delay_ms(250);
	}
}

void Diverge(uint8 port)
{	uint8 i;
	for (i =0; i<5; i++)
	{	_delay_ms(250);
		LED_Write(port,(3-i),1);
		LED_Write(port,(4+i),1);
		_delay_ms(250);
	}
	LED_Port_Write(port,0);
}

void Converge(uint8 port)
{	uint8 i;
	for (i =0; i<8; i++)
	{	_delay_ms(250);
		LED_Write(port,(7-i),1);
		LED_Write(port,(0+i),1);
		_delay_ms(250);
	}
	LED_Port_Write(port,0);
}

void Conv_Div(uint8 port)
{	uint8 i;
	for (i =0; i<5; i++)
	{	_delay_ms(250);
		LED_Write(port,(7-i),1);
		LED_Write(port,(0+i),1);
		_delay_ms(250);
	}

	LED_Port_Write(port,0);

	for (i =0; i<5; i++)
	{	_delay_ms(250);
		LED_Write(port,(3-i),1);
		LED_Write(port,(4+i),1);
		_delay_ms(250);
	}
	LED_Port_Write(port,0);
}

void Snake(uint8 port)
{	uint8 i;
	for (i=0; i<8; i++)
	{
		LED_Write(port,i, 1);
		_delay_ms(250);
	}
	LED_Port_Write(port,0);
}