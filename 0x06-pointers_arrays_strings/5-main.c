#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Holberton School!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("Pointer is %s", ptr);
    printf("String is %s", str);
    return (0);
}
