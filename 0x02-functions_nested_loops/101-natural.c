#include <stdio.h>

/**
 * main - This function will sum all multiples of 3 and 5 below 1024
 * Return: Returns 0 (always)
 */

int main(void)
{
	int i;
	int output = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 15 == 0)
			output = output + i;
		else if (i % 3 == 0)
			output = output + i;
		else if (i % 5 == 0)
			output = output + i;
	}
	printf("%i\n", output);
	return (0);
}
