/*
 * GPIO_DRIVER.h
 *
 *  Author: omar salem
 */ 

#include "STD_TYPE.h"
#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_


void Set_Pin_Dir(uint8 port, uint8 pinnum, uint8 dir);
void Pin_Write(uint8 port, uint8 pinnum, uint8 dir);
void Pin_Toggle(uint8 port, uint8 pinnum);
uint8 Pin_Read(uint8 port, uint8 pinnum);
void Set_Port_Dir(uint8 port, uint8 dir);
void Port_Write(uint8 port, uint8 dir);
void Low_Nibble_Dir(uint8 port,uint8 dir);
void High_Nibble_Dir(uint8 port, uint8 dir);
void Low_Nibble_Write(uint8 port, uint8 val);
void High_Nibble_Write(uint8 port, uint8 val);
void Internal_PullUp_en(uint8 port, uint8 pinnum);
void Internal_Port_PullUp_en(uint8 port);
void Internal_PullUP_Disable(void);


#endif /* GPIO_DRIVER_H_ */