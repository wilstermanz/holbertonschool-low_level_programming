#include "main.h"

/**
 * factorial - Returns factorial of given number
 * @n: input integer
 * Return: n!, or -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
