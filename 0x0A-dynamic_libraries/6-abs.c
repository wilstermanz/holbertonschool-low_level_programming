#include "main.h"

/**
 * _abs - function begins here
 * @n: Single int input.
 * Return: returns the absolute value of input
 */

int _abs(int n)
{
	int u;

	if (n < 0)
		u = n * -1;
	else
		u = n;

	return (u);
}
