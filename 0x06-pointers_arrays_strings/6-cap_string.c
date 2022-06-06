#include "holberton.h"

/**
 * cap_string - Capitalizes first first letter of word in string
 * @str: input string
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i, j;

	char sep[] = " \t\n,;.!\?\"(){}"; /* Word separtators */

	for (i = 0; str[i] != '\0'; i++) /* Begin checking string */
	{
		if (str[i] >= 97 && str[i] <= 122) /* Is *str a lowercase letter? */
		{
			if (i == 0) /* Is *str the first letter in the string? */
				str[i] = str[i] - 32; /* If yes, capitalize */
			for (j = 0; sep[j] != '\0'; j++) /* Begin checking word separators */
			{
				if (str[i - 1] == sep[j]) /* Does place before *str contain char in sep? */
					str[i] = str[i] - 32; /* If yes, capitalize */
			}
		}
	}

	return (str);
}
