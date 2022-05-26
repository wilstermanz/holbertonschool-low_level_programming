#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: 0 (always)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = a + b;
	int i;

	printf("%li, %li, %li, ", a, b, c);

	for (i = 4; i < 50; i++)
	{
		if ((i + 2) % 3 == 0)
		{
			a = b + c;
			printf("%li, ", a);
		}
		else if ((i + 1) % 3 == 0)
		{
			b = c + a;
			printf("%li, ", b);
		}
		else if (i % 3 == 0)
		{
			c = a + b;
			printf("%li, ", c);
		}
	}
	printf("%li\n", b);
	return (0);
}
