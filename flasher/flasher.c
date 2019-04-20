#define F_CPU 1000000UL  // частота ЦПУ

#include <avr/io.h>
#include <util/delay.h>

void main(void) {
	
	int delay = 1000;	// задержка в мс
    
    // настройка пинов порта
    DDRD |= (1 << PD0);		// пин PD0 порта DDRD на вывод
    
    // основной цикл
    while (1) {					// реализация бесконечного цикла
        PORTD |= (1 << PD0);	// на пине PD0 высокий уровень
        _delay_ms(delay);	// задержка
        PORTD &= ~(1 << PD0);	// низкий уровень на пине PD0
        _delay_ms(delay);	// задержка
    }
    
}
