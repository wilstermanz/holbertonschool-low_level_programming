#include "main.h"

/**
 * _strspn - gets the length of the prefix of a substring
 * @s: input string to be checked
 * @accept: bytes to be checked
 * Return: Length of bytes only from accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int out = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				out++;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
		s++;
	}
	return (out);
}
