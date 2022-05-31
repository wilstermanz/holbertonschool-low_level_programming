#include <stdio.h>

/**
 * main - finds and prints the largest factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int div = 2, maxFactor;

	while (num != 0)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			maxFactor = num;
			num = num / div;
			if (num == 1)
			{
				printf("%lu\n", maxFactor);
				num = 0;
				break;
			}
		}
	}
	return (0);
}
