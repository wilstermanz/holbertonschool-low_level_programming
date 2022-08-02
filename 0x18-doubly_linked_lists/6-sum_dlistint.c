#include "lists.h"

/**
 * sum_dlistint - Sums a dlistint_t list
 * @head: pointer to head node
 * Return: Sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
