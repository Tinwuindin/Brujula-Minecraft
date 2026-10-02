#ifndef HMC5883L_HAL_H_
#define HMC5883L_HAL_H_

#include <stdint.h>

// Driver que cambia entre arquitecturas

void I2C_Write(uint8_t u8Slave, uint8_t u8Dir, uint8_t* u8Data, uint8_t u8Size);
void I2C_Read(uint8_t u8Slave, uint8_t u8Dir, uint8_t* u8Data, uint8_t u8Size);


#endif // HMC5883L_HAL_H_
