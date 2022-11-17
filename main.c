/**
  ******************************************************************************
  * @file    main.c
  * @author GUIZANI WARDA
  * @brief   Bit Mask 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include <stm32f4xx.h>
#include "gpio.h"


int main()
{
   GPIO_Clock_Enable(GPIOD);
   GPIO_Config (GPIOD , PIN12 , OUTPUT, OUTPUT_PUSH_PULL);
   while(1)
   {
   }
}