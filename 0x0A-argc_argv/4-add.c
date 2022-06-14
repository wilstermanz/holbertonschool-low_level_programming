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
	int i, sum = 0;
	
	if (argc == 1)
		printf("%i\n", 0);
	else
	{
		for (i = 1; *argv[i] != '\0'; i++)
		{
			if (argv[i][0] >= 48 && argv[i][0] <= 57)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i", sum);
	}
	return(0);
}
