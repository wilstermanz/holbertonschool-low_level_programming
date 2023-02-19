#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * binary_search - Uses binary search to find value in a sorted array of ints
 *
 * @array: Pointer to array to seach
 * @size: Size of array
 * @value: Value for which to search
 *
 * Return: index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, sub_size = size;
	size_t sub_start = 0;

	while (array && sub_size > 0)
	{
		printf("Searching in array: ");
		print_array(&array[sub_start], sub_size);
		i = (sub_size - 1) / 2 + sub_start;

		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			sub_start = i + 1;
			sub_size /= 2;
		}
		else if (array[i] > value)
		{
			sub_size = (sub_size - 1) / 2;
		}
	}
	return (-1);
}
