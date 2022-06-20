#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: string to be copied
 * @n: number of bytes from src to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[j];
		if (src[j] != '\0')
			j++;
	}
	return (dest);
}
