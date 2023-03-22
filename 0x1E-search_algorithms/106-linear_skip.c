#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to head of skip list ot search in
 * @value: value to search for
 * Return: pointer to the first node where value is located, else NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left, *right = list;

	if (list)
	{
		while (right->n <= value)
		{
			printf("Value checked at index [%d] = [%d]", right->index, right->n);
			if (right->n == value)
			{
				printf("Found %d at index: %d", value, right->index);
				return (right);
			}
			left = right;
			right = right->express;
		}
		while (left->n <= value)
		{
			printf("Value checked at index [%d] = [%d]", left->index, left->n);
			if (left->n == value)
			{
				printf("Found %d at index: %d", value, left->index);
				return (left);
			}
			left = left->next;
		}
	}
	return (NULL);
}
