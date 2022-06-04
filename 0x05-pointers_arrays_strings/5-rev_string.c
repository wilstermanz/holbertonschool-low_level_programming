#include "main.h"

/**
 * rev_string - Reverses string input
 * @s: string input
 * Return: void
 */

void rev_string(char *s)
{
	int i, count = 0;
	char temp;

	for (i = 1; s[i] != '\0'; i++)
		count++;
	for (i = 0; i <= count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - i];
		s[count - i] = temp;
	}
}
