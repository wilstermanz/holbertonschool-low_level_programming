#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by separator
 * @separator: separates the strings
 * @n: number of strings to print
 * @...: Input strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	if (separator == NULL)
	{
		for (i = 1; i < n; i++)
		{
			str = va_arg(ap, char*);
			printf("%s", str != NULL ? str : "(nil)");
		}
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			str = va_arg(ap, char*);
			printf("%s%s", str != NULL ? str : "(nil)", separator);
		}
	}
	str = va_arg(ap, char*);
	printf("%s\n", str != NULL ? str : "(nil)");

	va_end(ap);
}
