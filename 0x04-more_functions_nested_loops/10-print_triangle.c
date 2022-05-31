#include "main.h"

/**
 * print_triangle - Prints a triangle with side of given size
 * @size: Size of triangle side
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; --j)
			{
				if (j <= i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
