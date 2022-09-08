#include"STD_TYPES.h"
#include"Bit_math.h"
#include"DIO_Private.h"

void DIO_VidSetPinDirection(u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Dir)
{
	if(1 == Copy_U8Dir)
	{
		switch(Copy_U8Port)
		{
			case 0 : SET_BIT(DDRA,Copy_U8Pin); break;
			case 1 : SET_BIT(DDRB,Copy_U8Pin); break;
			case 2 : SET_BIT(DDRC,Copy_U8Pin); break;
			case 3 : SET_BIT(DDRD,Copy_U8Pin); break;
		}
	}
	else if (0 == Copy_U8Dir)
	{
		switch(Copy_U8Port)
		{
			case 0 : CLEAR_BIT(DDRA,Copy_U8Pin); break;
			case 1 : CLEAR_BIT(DDRB,Copy_U8Pin); break;
			case 2 : CLEAR_BIT(DDRC,Copy_U8Pin); break;
			case 3 : CLEAR_BIT(DDRD,Copy_U8Pin); break;
		}
	}
}
void DIO_VidSetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin , u8 Copy_U8Value)
{
	if(1 == Copy_U8Value)
	{
		switch(Copy_U8Port)
		{
			case 0 : SET_BIT(PORTA,Copy_U8Pin); break;
			case 1 : SET_BIT(PORTB,Copy_U8Pin); break;
			case 2 : SET_BIT(PORTC,Copy_U8Pin); break;
			case 3 : SET_BIT(PORTD,Copy_U8Pin); break;
		}
	}
	else if (0 == Copy_U8Value)
	{
		switch(Copy_U8Port)
		{
			case 0 : CLEAR_BIT(PORTA,Copy_U8Pin); break;
			case 1 : CLEAR_BIT(PORTB,Copy_U8Pin); break;
			case 2 : CLEAR_BIT(PORTC,Copy_U8Pin); break;
			case 3 : CLEAR_BIT(PORTD,Copy_U8Pin); break;
		}
	}
}
u8   DIO_U8GetPinValue(u8 Copy_U8Port , u8 Copy_U8Pin )
{
	switch(Copy_U8Port)
		{
			case 0 : return GET_BIT(PINA,Copy_U8Pin); break;
			case 1 : return GET_BIT(PINB,Copy_U8Pin); break;
			case 2 : return GET_BIT(PINC,Copy_U8Pin); break;
			case 3 : return GET_BIT(PIND,Copy_U8Pin); break;
		}
}
void DIO_VidTogglePinValue(u8 Copy_U8Port , u8 Copy_U8Pin )
{
	switch(Copy_U8Port)
		{
			case 0 : TOGGLE_BIT(PORTA,Copy_U8Pin); break;
			case 1 : TOGGLE_BIT(PORTB,Copy_U8Pin); break;
			case 2 : TOGGLE_BIT(PORTC,Copy_U8Pin); break;
			case 3 : TOGGLE_BIT(PORTD,Copy_U8Pin); break;
		}
}
void DIO_VidSetPortValue(u8 Copy_U8Port  , u8 Copy_U8Value)
{
	switch(Copy_U8Port)
		{
			case 0 : PORTA = Copy_U8Value; break;
			case 1 : PORTB = Copy_U8Value; break;
			case 2 : PORTC = Copy_U8Value; break;
			case 3 : PORTD = Copy_U8Value; break;
		}
}
void DIO_VidSetPortDirection(u8 Copy_U8Port  , u8 Copy_U8Dir)
{
	switch(Copy_U8Port)
		{
			case 0 : DDRA = Copy_U8Dir; break;
			case 1 : DDRB = Copy_U8Dir; break;
			case 2 : DDRC = Copy_U8Dir; break;
			case 3 : DDRD = Copy_U8Dir; break;
		}
}