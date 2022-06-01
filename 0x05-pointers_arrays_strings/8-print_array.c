#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: Array input
 * @n: length of array input
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
