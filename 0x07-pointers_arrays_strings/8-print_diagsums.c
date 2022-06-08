#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals in a square matrix
 * @a: 2D array input
 * @size: length of side of a
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	j = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + size * i + j);
		j++;
	}

	j = size - 1;
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + *(a + size * i + j);
		j--;
	}
	printf("%i, %i\n", sum1, sum2);
}
