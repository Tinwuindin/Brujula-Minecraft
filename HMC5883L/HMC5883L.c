#include "HMC5883L.h"
#include "HMC5883L_HAL.h"

void HMC5883L_Init(void) {
	uint8_t u8Data = 0;
	u8Data = QMC5883P_MODE_CONTINUOUS | QMC5883P_ODR_50HZ | QMC5883P_RANGE_8G;
	I2C_Write(QMC5883P_ADDRESS, QMC5883P_REG_CONF1, &u8Data, 1);
}

int16_t HMC5883L_GetXOut(void) {
	uint8_t u8DataRead[2] = { 0 };
	I2C_Read(QMC5883P_ADDRESS, QMC5883P_REG_X_LSB, u8DataRead, sizeof(u8DataRead));
	return ((u8DataRead[1] << 8) | u8DataRead[0]);
}

int16_t HMC5883L_GetZOut(void) {
	uint8_t u8DataRead[2] = { 0 };
	I2C_Read(QMC5883P_ADDRESS, QMC5883P_REG_Z_LSB, u8DataRead, sizeof(u8DataRead));
	return ((u8DataRead[1] << 8) | u8DataRead[0]);
}

int16_t HMC5883L_GetYOut(void) {
	uint8_t u8DataRead[2] = { 0 };
	I2C_Read(QMC5883P_ADDRESS, QMC5883P_REG_Y_LSB, u8DataRead, sizeof(u8DataRead));
	return ((u8DataRead[1] << 8) | u8DataRead[0]);
}
