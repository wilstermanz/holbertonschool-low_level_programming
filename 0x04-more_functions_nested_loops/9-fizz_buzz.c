#include <stdio.h>

/**
 * main - prints 1-100.
 * Prints Fizz for multiples of 3, Buzz for multiples of 5.
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%i", i);
		if (i < 100)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
