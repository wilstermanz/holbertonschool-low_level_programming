#include "holberton.h"

/**
 * leet - converts a string to 1337
 * @str: string input
 * Return: pointer to str
 */

char *leet(char *str)
{
	char alpha[] = "aeotlAEOTL";
	char num[] = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
				str[i] = num[j];
		}
	}
	return (str);
}
