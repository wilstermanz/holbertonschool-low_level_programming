#include "main.h"

/**
 * _strlen_recursion - finds length of string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int out;

	if (*s)
		out = 1 + _strlen_recursion(s + 1);
	else
		out = 0;
	return (out);
}
