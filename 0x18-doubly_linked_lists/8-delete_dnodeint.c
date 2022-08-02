#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: pointer to head node
 * @index: position of node to delete
 * Return: 1 for success, -1 for failure;
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL, *ptr = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
	}
	if (ptr->prev)
	{
		temp = ptr->prev;
		temp->next = ptr->next;
	}
	if (ptr->next)
	{
		temp = ptr->next;
		temp->prev = ptr->prev;
	}
	free(ptr);
	if (index == 0)
	{
		*head = temp;
	}
	return (1);
}
