#include "STD_TYPES.h"
#include "DIO_Interface.h"
void main (void)
{DIO_VidSetPinDirection(PORTB,PIN0,INPUT);
DIO_VidSetPinValue(PORTB,PIN0,HIGH);
DIO_VidSetPinDirection(PORTA,PIN0,OUTPUT);
u8 p=0;
	while (1)
	{
p=DIO_U8GetPinValue(PORTB,PIN0);
	DIO_VidSetPinValue(PORTA,PIN0,p);

	}
}

