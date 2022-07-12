#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: pointer to head node
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
