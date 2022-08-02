#include "lists.h"

/**
 * print_dlistint_backward - Prints all elements of a dlistint_t list backwards
 * @h: pointer to head node
 * Return: Number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	if (ptr)
	{
		count = 1;
		while (ptr->next)
		{
			ptr = ptr->next;
			count++;
		}
		while (ptr)
		{
			printf("%d\n", ptr->n);
			ptr = ptr->prev;
		}
	}
	return (count);

}
