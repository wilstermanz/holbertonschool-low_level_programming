#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of dlistint_t list
 *
 * @head: pointer to head node
 * @index: index of node to return
 *
 * Return: pointer to node at index, or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr = head;

	if (index == 0)
	{
		return (head);
	}

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
	}
	return (ptr);
}
