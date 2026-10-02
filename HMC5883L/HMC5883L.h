#ifndef HMC5883L_H_
#define HMC5883L_H_

#include <stdint.h>

// Driver que no va a cambiar entre acquitecturas

#define QMC5883P_ADDRESS          (0x2C << 1)

#define QMC5883P_REG_ID           0x00

#define QMC5883P_REG_X_LSB        0x01
#define QMC5883P_REG_X_MSB        0x02
#define QMC5883P_REG_Y_LSB        0x03
#define QMC5883P_REG_Y_MSB        0x04
#define QMC5883P_REG_Z_LSB        0x05
#define QMC5883P_REG_Z_MSB        0x06

#define QMC5883P_REG_STATUS       0x09
#define QMC5883P_REG_CONF1        0x0A
#define QMC5883P_REG_CONF2        0x0B

#define QMC5883P_MODE_STANDBY      0x00
#define QMC5883P_MODE_CONTINUOUS   0x03

#define QMC5883P_ODR_10HZ          (0x00 << 2)
#define QMC5883P_ODR_50HZ          (0x01 << 2)

#define QMC5883P_RANGE_2G          (0x00 << 4)
#define QMC5883P_RANGE_8G          (0x01 << 4)


void HMC5883L_Init(void);
int16_t HMC5883L_GetXOut(void);
int16_t HMC5883L_GetYOut(void);
int16_t HMC5883L_GetZOut(void);


#endif //HMC5883L_H_
