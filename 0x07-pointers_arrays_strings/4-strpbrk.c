#include "main.h"

/**
 * _strpbrk - seaches a string for any set of bytes
 * @s: input string to be searched
 * @accept: string to search from
 * Return: pointer to byte s that matches accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, success = 0;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] != '\0')
			break;
	}
	if (accept[j] != '\0')
		return (s+i);
	else
		return (0);
}
