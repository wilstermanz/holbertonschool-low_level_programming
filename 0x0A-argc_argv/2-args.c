#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments added to it.
 * @argc: array of inputs
 * @argv: pointer to argc
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
