#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Bytes are copied here
 * @src: Memory area to be copied
 * @n: Number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		dest[i] = src[i];
	return (dest);
}
