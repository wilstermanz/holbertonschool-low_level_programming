#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98
 * @n: integer input
 * Return: Returns void
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%i\n", 98);
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%i, ", i);
		printf("98\n");
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%i, ", i);
		printf("98\n");
	}
}
