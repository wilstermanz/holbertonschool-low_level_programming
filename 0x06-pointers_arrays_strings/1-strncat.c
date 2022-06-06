#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string input one. src is appended here.
 * @src: string input two.
 * @n: number of bytes to use from src
 * Return: Pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
		if (src[j] == '\0')
			break;
	}

	return (dest);
}
