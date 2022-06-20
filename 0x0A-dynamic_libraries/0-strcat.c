#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string input one. src is appended here.
 * @src: string input two.
 * Return: Pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
