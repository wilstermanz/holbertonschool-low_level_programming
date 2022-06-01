#include "main.h"

/**
 * _puts - prints a string followed by a newline to the standard output
 * @str: input string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar(10);
}
