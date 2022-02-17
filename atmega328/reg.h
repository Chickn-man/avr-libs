#pragma once
#include <stdint.h>

#define DDRB *(uint8_t*)0x24
#define PORTB *(uint8_t*)0x25
#define DDRC *(uint8_t*)0x27
#define PORTC *(uint8_t*)0x28
#define DDRD *(uint8_t*)0x2a
#define PORTD *(uint8_t*)0x2b

#define PIN0 0b1
#define PIN1 0b10
#define PIN2 0b100
#define PIN3 0b1000
#define PIN4 0b10000
#define PIN5 0b100000
#define PIN6 0b1000000
#define PIN7 0b10000000