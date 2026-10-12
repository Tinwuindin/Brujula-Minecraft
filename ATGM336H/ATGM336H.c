#include "ATGM336H.h"
#include <string.h>
#include <stdlib.h>

uint8_t u8BufferMsg[961];


static float GPS_ConvertirCoordenada(float valor, char direccion) {
	int grados = (int)(valor / 100.0f);
	float minutos = valor - (grados * 100.0f);
	float decimal = grados + (minutos / 60.0f);

	if (direccion == 'S' || direccion == 'W') {
		decimal = -decimal;
	}

	return decimal;
}

LecturaGPS ATGM336H_GetData(const uint8_t* u8Msg) {
	LecturaGPS Leido = { 0 };
	char* campo;
	uint8_t indice = 0;
	
	campo = strtok((char*)u8Msg, ",");
	while (campo != NULL) {
		switch (indice) {
		case 0: {
			if (strcmp(campo, "$GNGGA") != 0) {
				return Leido;
			}
			break;
		}
		case 2: {
			Leido.fLatitud = atof(campo);
			break;
		}
		case 3: {
			Leido.fLatitud = GPS_ConvertirCoordenada(Leido.fLatitud, *campo);
			break;
		}
		case 4: {
			Leido.fLongitud = atof(campo);
			break;
		}
		case 5: {
			Leido.fLongitud = GPS_ConvertirCoordenada(Leido.fLongitud, *campo);
			break;
		}
		case 6: {
			Leido.bFix = atoi(campo);
			break;
		}
		case 7: {
			Leido.u16Satelites = atoi(campo);
			break;
		}
		case 8: {
			// Error de latitud
			break;
		}
		case 9: {
			Leido.fAltitud = atof(campo);
			break;
		}
		default:
			break;
		}
		campo = strtok(NULL, ",");
		indice++;
	}
	return Leido;
}

