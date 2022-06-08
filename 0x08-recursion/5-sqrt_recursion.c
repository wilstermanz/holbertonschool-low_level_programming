#include "main.h"

/**
 * sqrt2 - This finds the square root by guessing for x
 * @n: integer input
 * @x: sqrt guess
 * Return: sqrt of n, or -1 if error
 */

int sqrt2(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (sqrt2(n, x + 1));
}

/**
 * _sqrt_recursion - Finds the natural square root of n
 * @n: integer input
 * Return: sqrt of n, or -1 if error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt2(n, 1));
}
