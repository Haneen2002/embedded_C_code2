/*
 * push_button.c
 *
 * Created: 4/14/2023 4:53:27 PM
 *  Author: hanee
 */ 
#include "push_button.h"
#define F_CPU (16000000UL)
#include<util/delay.h>


void button_init(BUTTON_conf *BUTTON) {
	CLR_BIT((BUTTON->direction),BUTTON->pin_num); // Set the direction of the push button pin as input
	SET_BIT((BUTTON->port),BUTTON->pin_num); // Enable the internal pull-up resistor for the push button pin
}

uint8 button_is_pressed(BUTTON_conf *BUTTON) {
	if (!(*BUTTON->pin & (1 << BUTTON->pin_num))) {
		return 1; // Return 1 if the button is pressed
	}
	return 0; // Return 0 if the button is not pressed
}