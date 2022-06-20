#include "main.h"

/**
 * _islower - Function begins here.
 * @c: Character input to check
 * Return: Returns 1 if c is lowercase, returns 0 otherwise.
 */

int _islower(int c)
{
	int i;

	if ((c >= 97) && (c <= 122))
		i = 1;
	else
		i = 0;

	return (i);
}
