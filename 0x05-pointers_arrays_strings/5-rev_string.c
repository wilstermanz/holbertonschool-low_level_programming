#include "main.h"

/**
 * rev_string - Reverses string input
 * @s: string input
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, count = 0;
	char tmp;

	for (i = 1; s[i] != '\0'; i++)
		count++;
	for (j = 0; j <= count / 2; j++)
	{
		tmp = s[j];
		s[j] = s[count - j];
		s[count - j] = tmp;
		i++;
	}
}
