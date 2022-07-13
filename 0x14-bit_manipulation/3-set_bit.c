#include "main.h"
#define SUCCESS	 1
#define FAIL	-1

/**
 * set_bit - Sets bit at given index to 1
 * @n: integer
 * @index: Position for which to set bit to one
 * Return: 1 if success, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = (sizeof(*n) * 8) - 1;
	unsigned long int bitChanger = 1 << index;

	if (index > size)
		return (FAIL);

	*n = bitChanger | *n;

	return (SUCCESS);
}
