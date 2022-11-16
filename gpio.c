#include "gpio.h"

void GPIO_Clock_Enable(uint32_t *GPIOx)
{
  assert(GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC || GPIOx == GPIOD );
  uint16_t *RCCAHB1 = (uint16_t *)(0x40023800);
    
    if(GPIOx == GPIOA)
    {
    
     *RCCAHB1|= (1<<0); 
    }
    else if(GPIOx == GPIOB)
    {
    
     *RCCAHB1|= (1<<1); 
    }  
   else if(GPIOx == GPIOC)
    {
    
     *RCCAHB1|= (1<<2); 
    }
   else if(GPIOx == GPIOD)
    {
    
     *RCCAHB1|= (1<<3); 
    }
}
void GPIO_Config (uint32_t  *GPIOx, uint8_t pin,uint8_t Mode ,uint8_t  Type)
{
 
 uint16_t *OTYPER = (uint16_t *)(0x40020c00);
  uint16_t *GPIOx_MODER = (uint16_t *)(0x40020000);

  assert (GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC || GPIOx == GPIOD );
 
  if (pin==PIN0 ||pin==PIN1 ||pin==PIN2 ||pin==PIN3 ||pin==PIN4 ||pin==PIN5 ||pin==PIN6 ||pin==PIN7 ||pin==PIN8 ||pin==PIN9 ||pin==PIN10 ||pin==PIN11|| pin==PIN12 ||pin==PIN13 ||pin==PIN14 ||pin==PIN15)
  {
   assert (Mode==INPUT ||Mode ==OUTPUT || Mode==ALTERNATE ||Mode==ANALOG_INPUT);
    
   assert (Type==OUTPUT_PUSH_PULL ||Type==OUTPUT_OPEN_DRAIN);
     
 }
 
  *GPIOx_MODER |= (Mode <<pin );
  *OTYPER |= (Type <<pin) ;  
   
   }

 

