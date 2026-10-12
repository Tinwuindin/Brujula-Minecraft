#ifndef ATGM336H_H_
#define ATGM336H_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    bool bFix;
    uint16_t u16Satelites;
    float fAltitud;
    float fLatitud;
    float fLongitud;
}LecturaGPS;

extern uint8_t u8BufferMsg[961];

LecturaGPS ATGM336H_GetData(const uint8_t* u8Msg);

#endif // ATGM336H_H_
