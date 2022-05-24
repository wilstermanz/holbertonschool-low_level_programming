#include "main.h"

/**
 * print_sign - function begins here
 * @n: single integer input
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is less than zero.
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar(43);
		i = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		i = 0;
	}
	else
	{
		_putchar(45);
		i = -1;
	}

	return (i);
}
