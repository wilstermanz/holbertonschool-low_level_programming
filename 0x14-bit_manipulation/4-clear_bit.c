#include "main.h"
#define SUCCESS	 1
#define FAIL	-1

/**
 * clear_bit - Sets bit at given index to 0
 * @n: integer
 * @index: Position for which to set bit to one
 * Return: 1 if success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = (sizeof(*n) * 8) - 1;
	unsigned int bit = (*n >> index) & 1;
	unsigned long int bitChanger = 1 << index;

	if (index > size)
		return (FAIL);
	if (bit == 0)
		return (SUCCESS);

	*n = bitChanger ^ *n;

	return (SUCCESS);
}
