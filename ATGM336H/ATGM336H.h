#ifndef ATGM336H_H_
#define ATGM336H_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    float fLongitud;
    float fLatitud;
    uint16_t u16Satelites;
    bool bAntenaOk;
    bool bFix;
}LecturaGPS;

LecturaGPS ATGM336H_GetData(const uint8_t* u8Msg);

#endif // ATGM336H_H_
