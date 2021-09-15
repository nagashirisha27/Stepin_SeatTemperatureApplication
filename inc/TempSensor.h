#ifndef TEMPSENSOR_H_INCLUDED
#define TEMPSENSOR_H_INCLUDED

#include <util/delay.h>
#include <avr/io.h>

void InitADC();

uint16_t ReadADC(uint8_t ch);

uint16_t activity2_GetADC(void);


#endif // TEMPSENSOR_H_INCLUDED
