#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer input one
 * @b: integer input two
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
