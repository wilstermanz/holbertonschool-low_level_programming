#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: string to be copied
 * @n: number of bytes from src to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			break;
	}
	return (dest);
}
