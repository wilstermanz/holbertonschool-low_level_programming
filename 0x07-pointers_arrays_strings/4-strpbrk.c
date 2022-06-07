#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - seaches a string for any set of bytes
 * @s: input string to be searched
 * @accept: string to search from
 * Return: pointer to byte s that matches accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, success = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				success = 1;
				break;
			}
		}
		if (success)
			break;
		s++;
	}
	if (accept[i] == *s)
		return (s);
	else
		return ('\0');
}
