#include "main.h"

/**
 * print_rev - Prints a string input in reverse
 * @s: String input
 * Return: void
 */

void print_rev(char *s)
{
	int i, j, count = 0;

	for (i = 1; s[i] != '\0'; i++)
		count++;
	if (count != 0)
	{
		for (j = count; j >= 0; --j)
			_putchar(s[j]);
	}
	_putchar(10);
}
