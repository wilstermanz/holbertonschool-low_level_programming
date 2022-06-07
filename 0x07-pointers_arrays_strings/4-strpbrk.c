#include "main.h"

/**
 * _strpbrk - seaches a string for any set of bytes
 * @s: input string to be searched
 * @accept: string to be searched for
 * Return: pointer to byte s that matches accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				break;
			}
		}
		if (accept[i] != '\0')
			break;
		s++;
	}
	if (*s == accept[i])
		return (s);
	else
		return ('\0');
}
