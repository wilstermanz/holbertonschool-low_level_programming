#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: array to be copied into
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		dest++;
		src++;
		i++;

	return (dest);
}
