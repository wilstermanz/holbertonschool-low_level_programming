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
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * sizeof(size));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < sizeof(arr); i++)
	{
		arr[i] = 0;
	}
		
	return (arr);
}
