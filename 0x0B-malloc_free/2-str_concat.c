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
	int i, size1 = 0, size2 = 0;
	
	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i); i++)
			size1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; *(s2 + i); i++)
			size2++;
	}

	cat = malloc(size1 + size2 + 1);
	if (cat == 0)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			cat[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
			cat[i + size1] = s2[i];
	}
	cat[size1 + size2] = '\0';

	return (cat);
}
