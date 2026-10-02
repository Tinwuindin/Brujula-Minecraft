#include "HMC5883L.h"
#include "HMC5883L_HAL.h"


void HMC5883L_Init(void) {
	uint8_t u8Data = 0;

	u8Data = HMC5883L_AVG_8 | HMC5883L_RATE_15_HZ;
	I2C_Write(HMC5883L_ADRRESS, HMC5883L_CONF_REG_A, &u8Data, 1);

	u8Data = HMC5883L_GAIN_1_3;
	I2C_Write(HMC5883L_ADRRESS, HMC5883L_CONF_REG_B, &u8Data, 1);

	u8Data = HMC5883L_MODE_CONTINUOUS;
	I2C_Write(HMC5883L_ADRRESS, HMC5883L_CONF_MODE, &u8Data, 1);
}

int16_t HMC5883L_GetXOut(void) {
	uint8_t u8DataRead[2] = { 0 };
	I2C_Read(HMC5883L_ADRRESS, HMC5883L_DATA_X_H, u8DataRead, sizeof(u8DataRead));
	return ((u8DataRead[0] << 8) | u8DataRead[1]);
}

int16_t HMC5883L_GetZOut(void) {
	uint8_t u8DataRead[2] = { 0 };
	I2C_Read(HMC5883L_ADRRESS, HMC5883L_DATA_Z_H, u8DataRead, sizeof(u8DataRead));
	return ((u8DataRead[0] << 8) | u8DataRead[1]);
}

int16_t HMC5883L_GetYOut(void) {
	uint8_t u8DataRead[2] = { 0 };
	I2C_Read(HMC5883L_ADRRESS, HMC5883L_DATA_Y_H, u8DataRead, sizeof(u8DataRead));
	return ((u8DataRead[0] << 8) | u8DataRead[1]);
}

