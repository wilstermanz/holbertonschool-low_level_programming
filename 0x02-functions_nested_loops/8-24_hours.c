#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 * Return: No return
 */

void jack_bauer(void)
{
	int hh;
	int mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(58);
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar(10);
		}
	}
}
