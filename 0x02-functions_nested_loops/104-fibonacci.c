#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: 0 (always)
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = a + b;
	int i;

	printf("%lu, %lu, %lu, ", a, b, c);

	for (i = 4; i <= 98; i++)
	{
		if ((i + 2) % 3 == 0)
		{
			a = b + c;
			printf("%lu", a);
		}
		else if ((i + 1) % 3 == 0)
		{
			b = c + a;
			printf("%lu", b);
		}
		else if (i % 3 == 0)
		{
			c = a + b;
			printf("%lu", c);
		}
		if (i < 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
