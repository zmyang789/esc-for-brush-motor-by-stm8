#include "eeprom.h"
#include "BSP.h"

void Flash_eeprom_readwrite_Init(void)
{
    /* Define flash programming Time*/
    FLASH_SetProgrammingTime(FLASH_PROGRAMTIME_STANDARD);
    /* Unlock Data memory */
    FLASH_Unlock(FLASH_MEMTYPE_DATA); 
}


void read_calidata(void)
{
  MIDDLE_VAULE = (FLASH_ReadByte(0x4000)<<8)+FLASH_ReadByte(0x4001);
  FLASH_WaitForLastOperation(FLASH_MEMTYPE_DATA);
  if(MIDDLE_VAULE>1700 || MIDDLE_VAULE<1300)
    MIDDLE_VAULE=1500;
}

void set_calidata(uint16_t  cali)
{
  FLASH_EraseByte(0x4000);
  FLASH_WaitForLastOperation(FLASH_MEMTYPE_DATA);
  FLASH_EraseByte(0x4001);
  FLASH_WaitForLastOperation(FLASH_MEMTYPE_DATA);

  FLASH_ProgramByte(0x4000,cali>>8);
  FLASH_WaitForLastOperation(FLASH_MEMTYPE_DATA);
  FLASH_ProgramByte(0x4001,(uint8_t)(cali&0x0ff));
  FLASH_WaitForLastOperation(FLASH_MEMTYPE_DATA);

}
