#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: int in which to find bit
 * @index: Position of bit to return
 * Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
		return (-1);

	return ((n >> index) & 1);
}
