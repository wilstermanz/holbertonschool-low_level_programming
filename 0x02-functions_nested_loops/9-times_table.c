#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: Returns void.
 */

void times_table(void)
{
	int a;
	int b;
		
	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);

		for (b = 1; b <= 9; b++)
		{
			int ab = a * b;

			if ((ab / 10) > 0)
				_putchar((ab / 10) + '0');
			else
				_putchar(32);
			
			_putchar((ab % 10) + '0');

			if (b < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}

		_putchar(10);
	}
}
