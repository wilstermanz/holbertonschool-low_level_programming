#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: array of inputs
 * @argv: pointer to argc
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
