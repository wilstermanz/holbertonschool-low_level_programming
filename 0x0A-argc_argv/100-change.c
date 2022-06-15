#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * changemaker - does the math to find coins
 * @total: total to find change for
 * Return: Number of coins in total
 */

long int changemaker(long int total)
{
	long int coins = 0, value = 0;

	while (value < total)
	{
		while (value + 25 <= total)
		{
			value += 25;
			coins++;
		}
		while (value + 10 <= total)
		{
			value += 10;
			coins++;
		}
		while (value + 5 <= total)
		{
			value += 5;
			coins++;
		}
		while (value + 2 <= total)
		{
			value += 2;
			coins++;
		}
		while (value + 1 <= total)
		{
			value += 1;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - finds the number of coins needed to make change
 * @argc: number of inputs
 * @argv: double pointer to inputs
 * Return: 0, or 1 if error
 */

int main(int argc, char *argv[])
{
	long int total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total < 0)
		printf("%i\n", 0);
	else
		printf("%li\n", changemaker(total));
	return (0);
}
