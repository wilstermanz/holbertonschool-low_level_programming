#include "lists.h"

/**
 * sum_listint - sums all data in a listint_t list
 * @head: pointer to head node
 * Return: Sum of all data in list, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
