#include "main.h"

/**
 * print_alphabet_x10 - Starts reading here.
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar(10);
		i++;
	}
}
