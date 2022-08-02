#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: pointer to head node
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
