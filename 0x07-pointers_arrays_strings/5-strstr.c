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
	char *out;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] == haystack[i + j]; j++)
			{};
			if (needle[j] == '\0')
				break;
		}
	}
	out = &haystack[i];
	return (out);
}
				
