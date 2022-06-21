#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: numbers of bytes of s2 to concatenate
 * Return: pointer to concatenated string, or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i, j;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	size = 0;
	while (s1[size])
		size++;

	out = malloc(sizeof(*out) * size + n + 1);

	if (out == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (size + n); i++)
	{
		if (i < size)
		{
			out[i] = s1[i];
		}
		else
		{
			out[i] = s2[j++];
		}
	}
	out[i] = '\0';
	return (out);
}
