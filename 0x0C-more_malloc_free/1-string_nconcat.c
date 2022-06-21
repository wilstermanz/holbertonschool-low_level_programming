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
 * checks_for_null - Makes zero length string if input pointer is NULL
 * @str: input pointer
 * Return: pointer to string
 */

void *checks_for_null(char *str)
{
	if (str == NULL)
	{
		str = malloc(1);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
		str[0] = '\0';
	}
	return (str);
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
	unsigned int i, j, size1, size2;
	char *cat;

	s1 = checks_for_null(s1);
	s2 = checks_for_null(s2);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n < size2)
		cat = malloc(size1 + n + 1);
	if (n > size2)
		cat = malloc(size1 + size2 + 1);
	if (cat == NULL)
	{
		free(cat);
		return (NULL);
	}

	for (i = 0; i < size1; i++)
		cat[i] = s1[i];
	for (j = 0; j < n && j < size2; j++)
		cat[i + j] = s2[j];
	cat[i + j] = '\0';

	return (cat);
}
