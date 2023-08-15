/*
 * CFile1.c
 *
 * Created: 4/14/2023 4:51:47 PM
 *  Author: hanee
 */ 
#include "LED.h"
#define F_CPU (16000000UL)
#include<util/delay.h>


void led_init(LED_conf *led)
{
	SET_BIT((led->direction),led->pin); // Set the direction of the LED pin as output
	led_off(led); // Turn off the LED initially
}

void led_on(LED_conf *led)
{
	SET_BIT((led->port),led->pin); // Set the LED pin to high to turn it on
}

void led_off(LED_conf *led)
{
	CLR_BIT((led->port),led->pin); // Set the LED pin to low to turn it off
}

void led_toggle(LED_conf *led)
{
	TOGGLE_BIT((led->port),led->pin); // Toggle the state of the LED pin
}