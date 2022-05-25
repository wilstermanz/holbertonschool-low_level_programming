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

	if ((n < 0) || (n > 15))
		_putchar(0);
	else
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (b = 1; b <= n; b++)
			{
				int ab = a * b;

				if ((ab / 100) > 0)
					_putchar((ab / 100) + '0');
				else
					_putchar(' ');
				if ((ab / 10) > 0)
				{
					if (b <= 9)
						_putchar((ab / 10) + '0');
					else
						_putchar(((ab / 10) % 10) + '0');
				}
				else
					_putchar(' ');
				_putchar((ab % 10) + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
