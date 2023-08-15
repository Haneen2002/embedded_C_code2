/*
 * LED.h
 *
 * Created: 4/14/2023 4:51:32 PM
 *  Author: hanee
 */ 
#ifndef LED_H_
#define LED_H_

#include "BIT_MATH.h"
#include "ATmega32_Rrgiosters.h"
#include "std_types.h"

#define LED1_DDR DDRB
#define LED1_PIN pin7
#define LED1_PORT PORTB

#define LED2_DDR DDRA
#define LED2_PIN pin6
#define LED2_PORT PORTA

#define LED3_DDR DDRA
#define LED3_PIN pin5
#define LED3_PORT PORTA

#define LED4_DDR DDRA
#define LED4_PIN pin4
#define LED4_PORT PORTA

typedef struct  
{
    volatile uint8 *direction;
	volatile uint8 pin;
	volatile uint8 *port;
}LED_conf;

/*
LED_conf LED1={
	LED1_DDR,LED1_PIN,LED1_PORT
};

LED_conf LED2={
	LED2_DDR,LED2_PIN,LED2_PORT
};

LED_conf LED3={
	LED3_DDR,LED3_PIN,LED3_PORT
};

LED_conf LED4={
	LED4_DDR,LED4_PIN,LED4_PORT
};*/


void led_init(LED_conf *led);
void led_on(LED_conf *led);
void led_off(LED_conf *led);
void led_toggle(LED_conf *led);


#endif /* LED_H_ */