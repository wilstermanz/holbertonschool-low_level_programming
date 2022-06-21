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
	unsigned int i, j;
	char **array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(nmemb));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		array[i] = malloc(sizeof(size));
		if (array[i] == NULL)
		{
			for(; i > 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < size; j++)
			array[i][j] = 0;
	}

	return (array);
}
