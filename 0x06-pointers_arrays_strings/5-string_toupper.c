#include "holberton.h"

/**
 * string_toupper - Changes all lowercase characters to uppercase
 * @str: input string
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	char *out = str;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}

	return (out);
}
