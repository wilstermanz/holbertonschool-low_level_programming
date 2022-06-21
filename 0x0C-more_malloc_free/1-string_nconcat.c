#include "main.h"
#include <stdlib.h>

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
			exit(1);
		}
		*str = '\0';
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
	unsigned int i, j;
	char *s3;

	s1 = checks_for_null(s1);

	s2 = checks_for_null(s2);

	if (sizeof(s2) > n)
		s3 = malloc(sizeof(s1) + sizeof(n));
	else
		s3 = malloc(sizeof(s1) + sizeof(s2));

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];
	for (j = 0; (j < n) && s3[j]; j++)
		s3[j + i] = s2[j];

	return (s3);
}
