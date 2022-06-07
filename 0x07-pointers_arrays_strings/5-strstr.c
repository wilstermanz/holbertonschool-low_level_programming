#include "main.h"

/**
 * _strstr - finds the first occurance of needle in haystack
 * @haystack: string to be searched
 * @needle: string to be searched for
 * Return: pointer to beginning of located substring, or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i); i++)
	{
		if (*(haystack + i) == *needle)
		{
			for (j = 0; *(needle + j) == *(haystack + i + j); j++)
			{};
			if (*(needle + j) == '\0')
				return (haystack + i);
		}
	}
	return (0);
}
