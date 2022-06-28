#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by separator
 * @separator: string printed between numbers
 * @n: number of ints to print
 * @...: ints to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		printf("\n");
		return;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 1; i < n; i++)
		printf("%d", va_arg(ap, int));
	}
	else
	{
		for (i = 1; i < n; i++)
			printf("%d%s", va_arg(ap, int), separator);
	}
	printf("%d\n", va_arg(ap, int));

	va_end(ap);
}
