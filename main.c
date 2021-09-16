/**
 * @file main.c
 * @author PONNOJU NAGASHIRISHA(nagashirisha27@gmail.com)
 * @brief Heat Seating Application to set Temperature of seat 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "buttonsensor.h"
#include "tempsensor.h"
#include "pwm.h"

int main(void)
{
    while(1)
    {
        uint16_t temp;

        if(buttonsensor_LED()==1) //Check if both the switches are pressed
        {

            TurnLED_ON();//Turn LED ON
            temp=activity2_GetADC(); //Get the ADC value
            activity3_PWM(temp); //PWM output based on temperature
        }
        else  //in all other cases
        {
            TurnLED_OFF();//Turn LED OFF
		    _delay_ms(200);
        }

    }
    return 0;
}
