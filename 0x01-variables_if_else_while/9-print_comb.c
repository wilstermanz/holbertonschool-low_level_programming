#include <stdio.h>

/**
 * main - The program begins here.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
