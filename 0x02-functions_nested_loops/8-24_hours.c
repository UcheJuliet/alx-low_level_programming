#include "main.h"

/**
 * jack bauer - prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 24; hour++)
	{
		 for (min = 0; min <= 59; min++)
		 {
			 _putchar('0' + (hour / 10));
			 _putchar('0' + (hour % 10));
			 _putchar(':');
			 _putchar('0' + (min / 10));
			 _putchar('0' + (min % 10));
			 _putchar('\n');
		 }
	}
}
