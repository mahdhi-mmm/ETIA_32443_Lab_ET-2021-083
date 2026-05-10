

#define F_CPU 16000000UL
#include <avr/io.h>

int main(void)
{
    DDRB |= (1 << DDB0);
    
    while (1)
    {
        if (PIND & (1 << PD2))
            PORTB |= (1 << PB0);
        else
            PORTB &= ~(1 << PB0);
    }
}
