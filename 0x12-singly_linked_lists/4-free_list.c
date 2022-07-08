#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: pointer to head
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *temp2;

	temp = head;
	while (temp)
	{
		temp2 = temp->next;
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}
