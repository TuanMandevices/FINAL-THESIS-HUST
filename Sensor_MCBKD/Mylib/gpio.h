/**
  ******************************************************************************
  * @file		gpio.h
  * @author	www.hocdientu123.vn
  * @date		25/06/2019
  ******************************************************************************
  */
	
#ifndef __GPIO_H
#define __GPIO_H

#ifdef __cplusplus
 extern "C" {
#endif
#include "stm32f10x_gpio.h"
//----------KHAI BAO CAC HAM CHO GPIO.C
void GPIO_Configuration(void);
void GPIO_SetState(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode);
#ifdef __cplusplus
}
#endif

#endif
