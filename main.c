#include "buttonsensor.h"
#include "tempsensor.h"
#include "pwm.h"

int main(void)
{
    while(1)
    {
        uint16_t temp;

        if(activity1_LED()==1) //Check if both the switches are pressed
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
