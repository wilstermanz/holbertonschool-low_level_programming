#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a newline
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(10);
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
