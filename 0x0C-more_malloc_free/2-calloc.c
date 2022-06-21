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
	unsigned int i, totsize;
	char *out;

	totsize = nmemb * size;

	if (totsize == 0)
		return (NULL);

	out = malloc(totsize);
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (i = 0; i < totsize; i++)
	{
		out[i] = 0;
	}

	return (out);
}
