#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a name
 * @f: pointer to a function that modifies the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
