#include "bibi.h"

void delay_t(uint8_t x)
{
  int i,j;
  for(i=0;i<10;i++)
  {
    for(j=0;j<x;j++);
  } 
  
}


void bi(uint8_t n)
{
  uint8_t i;
  for(i=0;i<250;i++){
    GPIO_WriteLow(GPIOD,GPIO_PIN_2);
    GPIO_WriteHigh(GPIOD,GPIO_PIN_3);
    delay_t(n);
    GPIO_WriteLow(GPIOD,GPIO_PIN_3);
    GPIO_WriteHigh(GPIOD,GPIO_PIN_2);
    delay_t(n);
  }
  GPIO_WriteLow(GPIOD,GPIO_PIN_2);
  GPIO_WriteLow(GPIOD,GPIO_PIN_3);
  
}
/*******
电机发声
tone声调典型值80~250
time时间典型值2~6
********/
void bibi(uint8_t tone,uint8_t time)
{
  uint8_t i;
  for(i=0;i<time;i++)
    bi(tone);
}

void bi_start(void)
{
  
  
}
