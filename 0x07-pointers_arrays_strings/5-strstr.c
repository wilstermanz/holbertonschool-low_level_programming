#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurance of needle in haystack
 * @haystack: string to be searched
 * @needle: string to be searched for
 * Return: pointer to beginning of located substring, or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*(haystack + i))
	{
		j = 0;
		while(*(needle + j))
		{
			if (*(needle + j) != *(haystack + i + j))
				break;
			j++;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
		i++;
	}

	return (0);
}
