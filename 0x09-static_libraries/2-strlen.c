#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: Input string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
