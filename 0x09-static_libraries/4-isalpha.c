#include "main.h"

/**
 * _isalpha - function begins here
 * @c: Single letter input
 * Return: Returns 1 if c is a letter, returns 0 otherwise.
 */

int _isalpha(int c)
{
	int i;

	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		i = 1;
	else
		i = 0;

	return (i);
}
