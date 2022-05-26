#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: 0 (always)
 */

int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int c = a + b;
	int i;

	printf("%llu, %llu, %llu, ", a, b, c);

	for (i = 4; i < 98; i++)
	{
		if ((i + 2) % 3 == 0)
		{
			a = b + c;
			printf("%llu", a);
		}
		else if ((i + 1) % 3 == 0)
		{
			b = c + a;
			printf("%llu", b);
		}
		else if (i % 3 == 0)
		{
			c = a + b;
			printf("%llu", c);
		}
		if (i < 97)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
