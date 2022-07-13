#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print in binary
 */

void print_binary(unsigned long int n)
{
	int size, digit, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (size = (sizeof(n) * 8) - 1; size >= 0; size--)
	{
		digit = (n >> size) & 1;

		if (digit == 0 && flag == 1)
			_putchar('0');
		if (digit == 1)
		{
			_putchar('1');
			flag = 1;
		}
	}
}

