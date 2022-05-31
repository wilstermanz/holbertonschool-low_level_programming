#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		int ones = 48;
		int tens = 49;

		for (j = 0; j <= 14; j++)
		{
			if (j == 10)
				ones = 48;
			if (j >= 10)
				_putchar(tens);
			_putchar(ones);
			ones++;
		}
		_putchar(10);
	}
}
