#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: pointer to list head
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node)
	{
		node = node->next;
		count++;
	}

	return (count);
}

