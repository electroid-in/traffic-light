/*
 * trsffic light.c
 *
 * Created: 02-09-2025 12:29:32 PM
 * Author : ADHITHYAN
 */ 

/*
 * seven segment.c
 *
 * Created: 02-09-2025 11:47:26 AM
 * Author : ADHITHYAN
 */ 

#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>

int main(void)
{
	DDRA = 0xFF;  
	DDRB = 0xFF;  

	while (1)
	{
		PORTA = 0x04;

		 PORTB = 0x6F; _delay_ms(1000);  // 9
		 PORTB = 0x7F; _delay_ms(1000);  // 8
		 PORTB = 0x07; _delay_ms(1000);  // 7
		 PORTB = 0x7D; _delay_ms(1000);  // 6
		 PORTB = 0x6D; _delay_ms(1000);  // 5
		 PORTB = 0x66; _delay_ms(1000);  // 4
		 PORTB = 0x4F; _delay_ms(1000);  // 3
		 PORTB = 0x5B; _delay_ms(1000);  // 2
		 PORTB = 0x06; _delay_ms(1000);  // 1
		 PORTB = 0x3F; _delay_ms(1000);  // 0

		PORTA = 0x02;

		 PORTB = 0x66; _delay_ms(1000);   // 4
		 PORTB = 0x4F; _delay_ms(1000);   // 3
		 PORTB = 0x5B; _delay_ms(1000);   // 2
		 PORTB = 0x06; _delay_ms(1000);   // 1
		 PORTB = 0x3F; _delay_ms(1000);   // 0

		PORTA = 0x01;

		PORTB = 0x6F; _delay_ms(1000);   // 9
		PORTB = 0x7F; _delay_ms(1000);   // 8
		PORTB = 0x07; _delay_ms(1000);   // 7
		PORTB = 0x7D; _delay_ms(1000);   // 6
	    PORTB = 0x6D; _delay_ms(1000);   // 5
		PORTB = 0x66; _delay_ms(1000);   // 4
		PORTB = 0x4F; _delay_ms(1000);   // 3
		PORTB = 0x5B; _delay_ms(1000);   // 2
		PORTB = 0x06; _delay_ms(1000);   // 1
		PORTB = 0x3F; _delay_ms(1000);   // 0
	}
}
