#include "main.h"

/**
 * print_alphabet - The program begins running here.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar(10);

	return;
}
