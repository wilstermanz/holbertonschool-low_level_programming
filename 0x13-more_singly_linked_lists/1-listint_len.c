#include "lists.h"

/**
 * listint_len - Counts all elements of a listint_t list
 * @h: Pointer to head node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t  count;

	for (count = 0; ptr; count++)
		ptr = ptr->next;

	return (count);
}
