#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for nmemb elements of size bytes
 * @nmemb: number of elements in array
 * @size: size of bytes per element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * sizeof(size));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < sizeof(array); i++)
	{
		array[i] = 0;
	}
		
	return (array);
}
