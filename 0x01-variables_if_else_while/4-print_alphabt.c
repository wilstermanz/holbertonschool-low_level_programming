#include <stdio.h>

/**
 * main - Identifies whether n is positive or negative.
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101)
			continue;
		else if (i == 113)
			continue;
		else
			putchar(i);
	}
	putchar(10);
	return (0);
}
