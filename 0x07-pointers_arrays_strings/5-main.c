#include <stdlib.h>
#include <stdio.h>

char *_strstr(char *, char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "Holberton";
	char *t;

	t = _strstr(s, f);
	putchar(*t);
	return (0);
}
