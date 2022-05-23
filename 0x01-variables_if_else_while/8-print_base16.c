#include <stdio.h>

/**
 * main - Identifies whether n is positive or negative.
 *
 * Return: Always 0
 */

int main(void)
{
	char i = 48;

	while (i <= 58)
	{
		if (i < 58)
		{
			putchar(i);
			i++;
		}
		else
			i = 97;
	}
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
