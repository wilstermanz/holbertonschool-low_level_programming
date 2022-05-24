#include "main.h"

/**
 * print_last_digit - Function begins here
 * @n: integer input
 * Return: returns last digit of input n
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = i * -1;

	_putchar(i + '0');

	return (i);
}
