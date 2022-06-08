#include "main.h"

/**
 * _pow_recursion - Returns x raised by y
 * @x: integer input
 * @y: integer power
 * Return: x^y, or -1 if error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
