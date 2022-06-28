#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct form - struct form
 *
 * @form: data format
 * @func: associated function
 */
typedef struct form
{
	char *form;
	void (*func)(va_list);
} form;

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

#endif
