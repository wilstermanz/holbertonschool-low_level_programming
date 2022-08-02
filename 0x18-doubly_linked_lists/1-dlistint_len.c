#include "lists.h"

/**
 * dlistint_len - Returns the numbers of elements in a dlistint_t list
 * @h: pointer to head node
 * Return: Number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
