#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL
 * @head: pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;
	
	if (head == NULL)
		return;

	temp = *head;
	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
