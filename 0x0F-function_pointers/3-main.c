#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Start point of program
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, out;
	int (*op)(int, int);

	/* Check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert char input to int */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Get operator function */
	op = get_op_func(argv[2]);

	/* Check output for errors */
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Get and print output */
	out = op(a, b);
	printf("%d\n", out);

	return (0);
}
