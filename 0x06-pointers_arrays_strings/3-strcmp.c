#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: String input 1
 * @s2: String input 2
 * Return: int difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (diff);
}
