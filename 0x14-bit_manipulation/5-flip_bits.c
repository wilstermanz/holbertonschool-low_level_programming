#include "main.h"

/**
 * flip_bits - returns the number of bits that would need to
 * be flipped to get from one number to another.
 *
 * @n: First number in comparison
 * @m: Second number in comparison
 * Return: Number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int size = (sizeof(n) * 8) - 1;
	int bitn, bitm, out = 0;

	for (; size >= 0; size--)
	{
		bitn = (n >> size) & 1;
		bitm = (m >> size) & 1;
		out += bitn ^ bitm;
	}

	return (out);
}
