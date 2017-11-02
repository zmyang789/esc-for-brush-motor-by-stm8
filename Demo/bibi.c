#include "bibi.h"

void delay_t(uint16_t x)
{
  uint16_t i,j;
  for(i=0;i<100;i++)
  {
    for(j=0;j<x;j++);
  } 
  
}


void bi(uint8_t n)
{
  uint8_t i;
  for(i=0;i<100;i++){
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
tone声调典型值8~25
time时间典型值2~6
********/
void bibi(uint8_t tone,uint8_t time)
{
  uint8_t i;
  for(i=0;i<time;i++)
    bi(tone);
}

void bibi_start(void)
{
  bibi(25,1);
  delay_t(2000);
  bibi(18,1);
  delay_t(2000);
  bibi(12,3);
    
  
}
void bibi_cali_1(void)
{
  bibi(18,1);
  delay_t(2000);
  bibi(18,1);
  delay_t(2000);
  bibi(18,1);
  
}


void bibi_cali_2(void)
{
  bibi(18,1);
  delay_t(10000);
  bibi(18,3);
  
  
  
}

