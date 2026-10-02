#include "HMC5883L_HAL.h"

#define STM32HAL 
#ifdef STM32HAL

#include "i2c.h"

extern I2C_HandleTypeDef hi2c3;

void I2C_Write(uint8_t u8Slave, uint8_t u8Dir, uint8_t* u8Data, uint8_t u8Size) {
	HAL_I2C_Mem_Write(&hi2c3, u8Slave, u8Dir, I2C_MEMADD_SIZE_8BIT, u8Data, u8Size, 100);
}

void I2C_Read(uint8_t u8Slave, uint8_t u8Dir, uint8_t* u8Data, uint8_t u8Size) {
	HAL_I2C_Mem_Read(&hi2c3, u8Slave, u8Dir, I2C_MEMADD_SIZE_8BIT, u8Data, u8Size, 100);
}


#else 

#error

#endif // STM32HAL
