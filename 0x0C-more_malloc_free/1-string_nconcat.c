#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts bytes in string
 * @str: input string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i, size = 0;

	for (i = 0; str[i]; i++)
		size++;
	return (size);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: numbers of bytes of s2 to concatenate
 * Return: pointer to concatenated string, or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1;
	char *cat;
	char *junk;

	junk = malloc(5);
	free(junk);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);

	cat = malloc(size1 + (n * sizeof(*s2) + 1) * sizeof(*cat));

	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		cat[i] = s1[i];
	for (j = 0; s2[j] && j < n; j++, i++)
		cat[i] = s2[j];
	cat[i] = '\0';

	return (cat);
}
