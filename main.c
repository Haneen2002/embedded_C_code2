/*
 * ASS_3_EM.c
 *
 * Created: 4/14/2023 4:23:58 PM
 * Author : hanee
 */ 
#include "BIT_MATH.h"
#include "ATmega32_Rrgiosters.h"
#include "LED.h"
#include "push_button.h"
#define F_CPU (16000000)
#include<util/delay.h>



 int main(void) {  
	 
	 // Configure LED
	 LED_conf led1;
	 led1.port = &LED1_PORT;
	 led1.direction = &LED1_DDR;
	 led1.pin = LED1_PIN;
	 led_init(&led1);

	 // Configure push button
	 BUTTON_conf pb;
	 pb.port = &BUTTON1_PORT;
	 pb.pin = &BUTTON1_PIN;
	 pb.direction = &BUTTON1_DDR;
	 pb.pin_num = BUTTON1_pin_num;
	 button_init(&pb);

	 while (1)
	 {
		 if (button_is_pressed(&pb)) // If the push button is pressed
		 {
			 led_toggle(&led1); // Toggle the state of the LED
			 while (button_is_pressed(&pb)); // Wait for the push button to be released
		 }
	 }

	 return 0;
}

