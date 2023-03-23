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
		while (right->express)
		{
			printf("Value checked at index [%ld] = [%d]\n",
				right->express->index, right->express->n);
			if (right->express->n >= value)
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
					right->index, right->express->index);
				break;
			}
			right = right->express;
		}
		if (!right->express)
		{
			left = right;
			while (right->next)
				right = right->next;
			printf("Value found between indexes [%ld] and [%ld]\n",
			left->index, right->index);
		}
		if (right->express)
		{
			left = right;
			right = right->express;
		}
		while (left->index < right->index)
		{
			printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
			if (left->n == value)
				return (left);
			left = left->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
	}
	return (NULL);
}
