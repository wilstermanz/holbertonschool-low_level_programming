#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: int in which to find bit
 * @index: Position of bit to return
 * Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int digit, size = (sizeof(n) * 8) - 1;

	if (index > size)
		return (-1);
	digit = (n >> index) & 1;

	return (digit);
}
