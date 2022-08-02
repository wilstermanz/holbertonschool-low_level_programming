#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t list
 * @head: Pointer to head node.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr->next)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
	free(ptr);
}
