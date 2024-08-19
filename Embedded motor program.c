/*
 * GccApplication21.c
 *
 * Created: 3/23/2024 6:07:06 PM
 * Author : Glenn
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>






int main(void)
{
	
	int speed;
	const int MAX_PWM_VALUE = 255;
	
	TCCR2A = (0 << COM2A0) | (1 << COM2A1) | (1 << WGM21) | (1 << WGM20);
	TCCR2B = (1 << CS20) | (1 << CS21) | (1 << CS22);
	
	DDRB |= (1 <<PB3) | (1 <<PB2) | (1 << PB1);
	PORTB |= (1 << PB2) | (0 << PB1);
	
	sei();
	
    /* Replace with your application code */
    while (1) 
    {
		
		
		OCR2A = 255;
		_delay_ms(10000);
		OCR2A = 160;
		_delay_ms(10000);
		OCR2A = 207;
		_delay_ms(10000);
		OCR2A = 112;
		_delay_ms(10000);
		
		
		
		
    }
}

