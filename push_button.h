/*
 * push_button.h
 *
 * Created: 4/14/2023 4:53:10 PM
 *  Author: hanee
 */ 


#ifndef PUSH_BUTTON_H_
#define PUSH_BUTTON_H_

#include "BIT_MATH.h"
#include "ATmega32_Rrgiosters.h"
#include "std_types.h"

#define BUTTON1_DDR DDRD
#define BUTTON1_PORT PORTD
#define BUTTON1_PIN PIND
#define BUTTON1_pin_num pin7

#define BUTTON2_DDR DDRD
#define BUTTON2_PORT PORTD
#define BUTTON2_PIN pin6

#define BUTTON3_DDR DDRD
#define BUTTON3_PORT PORTD
#define BUTTON3_PIN pin5

#define BUTTON4_DDR DDRD
#define BUTTON4_PORT PORTD
#define BUTTON4_PIN pin3

typedef struct
{
	volatile uint8 *direction;
	volatile uint8 *pin;
	volatile uint8 *port;
	uint8 pin_num; // Pin number of the push button
}BUTTON_conf;

/*
BUTTON_conf BUTTON1={
	LED1_DDR,LED1_PIN,LED1_PORT
};

BUTTON_conf BUTTON2={
	LED2_DDR,LED2_PIN,LED2_PORT
};

BUTTON_conf BUTTON3={
	LED3_DDR,LED3_PIN,LED3_PORT
};

BUTTON_conf BUTTON4={
	LED4_DDR,LED4_PIN,LED4_PORT
};*/

void button_init(BUTTON_conf *BUTTON);

uint8 button_is_pressed(BUTTON_conf *BUTTON) ;




#endif /* PUSH_BUTTON_H_ */