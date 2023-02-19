#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array in integers
 *
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index of found value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%i]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
