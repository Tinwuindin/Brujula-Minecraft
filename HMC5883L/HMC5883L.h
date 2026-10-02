#ifndef HMC5883L_H_
#define HMC5883L_H_

#include <stdint.h>

// Driver que no va a cambiar entre acquitecturas

#define HMC5883L_ADRRESS 0x3C << 1

#define HMC5883L_CONF_REG_A 0x0B
#define HMC5883L_CONF_REG_B 0x0C
#define HMC5883L_CONF_MODE 0x0A
#define HMC5883L_DATA_X_H 0x01
#define HMC5883L_DATA_X_L 0x02
#define HMC5883L_DATA_Z_H 0x03
#define HMC5883L_DATA_Z_L 0x04
#define HMC5883L_DATA_Y_H 0x05
#define HMC5883L_DATA_Y_L 0x06

#define HMC5883L_AVG_8 (0x3 << 5)
#define HMC5883L_RATE_15_HZ (0x4 << 2)

#define HMC5883L_GAIN_1_3 (0x1 << 5)

#define HMC5883L_MODE_CONTINUOUS (0x0 << 0)


void HMC5883L_Init(void);
int16_t HMC5883L_GetXOut(void);
int16_t HMC5883L_GetYOut(void);
int16_t HMC5883L_GetZOut(void);


#endif //HMC5883L_H_
