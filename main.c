/**
  ******************************************************************************
  * @file    main.c
  * @author GUIZANI WARADA
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
   GPIO_Config (GPIOD , PIN12 , ALTERNATE , OUTPUT_OPEN_DRAIN );
   while(1)
   {
   }
}