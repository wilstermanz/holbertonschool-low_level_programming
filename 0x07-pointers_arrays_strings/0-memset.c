#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Byte to fill memory
 * @n: Number of bytes to be filled
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		s[i] = b;

	return (s);
}
