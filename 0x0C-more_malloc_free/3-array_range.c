#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints from from min to max
 * @min: first value in array
 * @max: last value in array
 * Return: pointer to array, or NULL if fail.
 */

int *array_range(int min, int max)
{
	/* Declarations*/
	int i;
	int *array;

	/* Check input format for errors */
	if (min > max)
		return (NULL);

	/* Allocate memory for new array */
	array = malloc(sizeof(array) * (max - min + 1));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	/* Add values to array */
	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
