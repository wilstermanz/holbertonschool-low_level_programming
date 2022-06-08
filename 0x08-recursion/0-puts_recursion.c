#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a newline
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
	else
		_putchar(10);
}
