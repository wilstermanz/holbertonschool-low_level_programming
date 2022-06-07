#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string to be searched
 * @c: Character to be searched for
 * Return: pointer to first occurance of c, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
