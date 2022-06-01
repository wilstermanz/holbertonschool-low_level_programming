#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: array to be copied into
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, count = 0;

	for (i = 0; src[i] != '\0'; i++)
		count++;
	for (j = 0; j <= count; j++)
		dest[j] = src[j];
	return (dest);
}
