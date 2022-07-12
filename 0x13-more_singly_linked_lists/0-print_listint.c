#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t  i;

	for (i = 0; ptr; i++)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}

	return (i);
}
