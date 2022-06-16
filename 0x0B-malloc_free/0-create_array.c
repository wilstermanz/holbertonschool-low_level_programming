#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initailized with a specific char
 * @size: size of array
 * @c: initial char
 * Return: pointer to array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= (int)size; i++)
		array[i] = c;

	return (array);
}
