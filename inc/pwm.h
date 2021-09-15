#ifndef PWM_H_INCLUDED
#define PWM_H_INCLUDED

#define PWM_20_PERCENT (205) /**< Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< Output PWM for 95% duty cycle */

#include <util/delay.h>
#include <avr/io.h>

void InitTimer();

void activity3_PWM(uint16_t temp);

#endif // PWM_H_INCLUDED
