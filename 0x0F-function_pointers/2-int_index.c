#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to comparison function
 * Return: Index of matching element, or -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, isMatch;

	/* Check for valid size */
	if (size <= 0)
		return (-1);

	/* Iterate array through comparison function */
	for (i = 0; i < size; i++)
	{
		isMatch = cmp(array[i]);
		if (isMatch != 0)
			return (i);
	}
	return (-1);
}
