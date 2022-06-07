#include "main.h"

/**
 * _strpbrk - seaches a string for any set of bytes
 * @s: input string to be searched
 * @accept: string to search from
 * Return: pointer to byte s that matches accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, brk = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				brk = 1;
				break;
			}
		}
		if (brk)
			break;
		s++;
	}

	if (*s == accept[i])
		return (s);
	else
		return ('\0');
}
