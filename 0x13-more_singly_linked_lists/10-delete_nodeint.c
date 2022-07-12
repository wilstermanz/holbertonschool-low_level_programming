#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: position to delete node
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr = *head;
	unsigned int i;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
