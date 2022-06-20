#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: input
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	int o;

	if ((c >= '0') && (c <= '9'))
		o = 1;
	else
		o = 0;
	return (o);
}
