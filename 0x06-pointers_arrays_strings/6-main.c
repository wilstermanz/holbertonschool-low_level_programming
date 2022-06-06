#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "a a\na\ta\na,a\na;a\na.a\na!a\na?a\na\"a\na(a\na)a\na{a\na}a\n";
    char *ptr;

    ptr = cap_string(str);
    printf("Pointer:\n%s\n", ptr);
    printf("String:\n%s\n", str);
    return (0);
}
