#include "main.h"

/**
 * puts_half - Prints the last half of a string
 * @str: Input string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	for (j = length / 2; j <= length; j++)
		_putchar(str[j]);
	_putchar(10);
}
