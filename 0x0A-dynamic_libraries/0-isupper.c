#include "main.h"

/**
 * _isupper - Find if input is a capital letter
 * @c: input
 * Return: 1 if true, else 0
 */

int _isupper(int c)
{
	int o;

	if ((c >= 'A') && (c <= 'Z'))
	{
		o = 1;
	}
	else
	{
		o = 0;
	}

	return (o);
}
