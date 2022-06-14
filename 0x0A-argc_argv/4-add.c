#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: array of inputs
 * @argv: pointer to argc
 * Return: 0 if successful, else 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("%i\n", 0);
	else
	{
		for (i = 1; i < argc; ++i)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= 48 && argv[i][j] <= 57)
				{
					sum = sum + atoi(argv[i]);
					break;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%i\n", sum);
	}
	return (0);
}
