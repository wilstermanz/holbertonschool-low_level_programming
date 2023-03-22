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
			if (right->n == value)
			{
				return (right);
			}
			left = right;
			right = right->express;
		}
		while (left->n <= value)
		{
			if (left->n == value)
			{
				return (left);
			}
			left = left->next;
		}
	}
	return (NULL);
}
