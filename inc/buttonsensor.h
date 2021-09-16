#ifndef BUTTONSENSOR_H_INCLUDED
#define BUTTONSENSOR_H_INCLUDED

/**
 * @file buttonsensor.c
 * @author PONNOJU NAGASHIRISHA(nagashirisha27@gmail.com)
 * @brief Header file for buttonsensor
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */


#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */
#define LED_PIN  (PORTD2)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */


/**
 * Include files
 */ 

#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */


/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */

void peripheral_init(void);

/**
 * @brief Function to turn LED on
 * 
 */

void TurnLED_ON();

/**
 * @brief Function to turn LED off
 * 
 */

void TurnLED_OFF();

/**
 * @brief buttonsensor to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */

int buttonsensor_LED(void);


#endif // BUTTONSENSOR_H_INCLUDED
