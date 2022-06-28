#include <stdlib.h>
#include <stdio.h>
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
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list ap;
	int i, j;
	char *separator = "";

	va_start(ap, format);

	i = 0;
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *print_type[j].form)
			{
				printf("%s", separator);
				print_type[j].func(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints a char
 * @ap: input
 * Return: void
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an int
 * @ap: input
 * Return: void
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: input
 * Return: void
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: input
 * Return: void
 */

void print_string(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
