#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints any type of argument
 * @format: string containing all format types
 * @...: Things to be printed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	form print_type[] = {
		{"c", print_char},

	va_list ap;

