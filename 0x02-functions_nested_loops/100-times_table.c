#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: integer input
 * Return: Returns void.
 */

void print_times_table(int n)
{
	int a;
	int b;

	if ((n >= 0) && (n <= 15))
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				int ab = a * b;

				_putchar(',');
				_putchar(' ');
				if ((ab / 100) > 0)	/* Assigns 100s place digit */
					_putchar((ab / 100) + '0');
				else
					_putchar(' ');
				if ((ab / 10) > 0)	/* Assigns 10s place digit */
				{
					if ((ab / 10) < 10)
						_putchar((ab / 10) + '0');
					else
						_putchar(((ab / 10) % 10) + '0');
				}
				else
					_putchar(' ');
				_putchar((ab % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
