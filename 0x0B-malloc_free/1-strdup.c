#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of a string
 * @str: string to be copied
 * Return: Pointer to str copy, or NULL if error
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;

	if (str == NULL)
		return (NULL);

	cpy = malloc(*str);

	for (i = 0; str[i]; i++)
		cpy[i] = str[i];

	return (cpy);
}
