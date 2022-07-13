#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int
 * @b: binary string
 * Return: Converted number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int i, multiplier = 1;
	unsigned int out = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	for (i -= 1; i >= 0; i--)
	{
		out += (b[i] - '0') * multiplier;
		multiplier *= 2;
	}

	return (out);
}
