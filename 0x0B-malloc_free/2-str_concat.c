#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string, or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j = 0, size = 0;

	for (i = 0; *(s1 + i); i++)
		size++;
	for (i = 0; *(s2 + i); i++)
		size++;

	cat = malloc(size + 1);
	if (cat == 0)
		return (NULL);

	for (i = 0; *(s1 + i); i++)
		*(cat + i) = *(s1 + i);
	for (; *(s2 + j); i++)
	{
		*(cat + i) = *(s2 + j);
		j++;
	}
	*(cat + i) = '\0';

	return (cat);
}
