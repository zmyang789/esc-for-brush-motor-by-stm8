#ifndef __EEPROM_H
#define __EEPROM_H

#include "stm8s.h"

void Flash_eeprom_readwrite_Init(void);
void read_calidata(void);
void set_calidata(uint16_t  cali);


#endif