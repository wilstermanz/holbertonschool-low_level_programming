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
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			success = 1;
			break;
		}
	}
	if (success)
		return (s + i);
	else
		return (0);
}
