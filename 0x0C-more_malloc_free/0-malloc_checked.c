#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Runs malloc and checks for errors
 * @b: int to malloc
 * Return: Returns pointer to allocated memory, or 98 if failure
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}

