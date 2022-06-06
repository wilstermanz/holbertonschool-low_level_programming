#include "holberton.h"

/**
 * cap_string - Capitalizes first first letter of word in string
 * @str: input string
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i, j;

	char *sep = " \t\n,;.!\?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			j = 0;
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
					str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
