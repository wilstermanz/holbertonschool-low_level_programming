#include "main.h"
#include <stdio.h>

/**
 * main - returns the number of arguments added to it
 * @argc: array of inputs
 * @argv: pointer to argc
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
