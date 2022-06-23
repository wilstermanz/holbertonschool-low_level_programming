#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two ints
 * @a: first int
 * @b: second int
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: first int
 * @b: second int
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two ints
 * @a: first int
 * @b: second int
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two ints
 * @a: first int
 * @b: second int
 * Return: Result of division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulos two ints
 * @a: first int
 * @b: second int
 * Return: Remainder of division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
