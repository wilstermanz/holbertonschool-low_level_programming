#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a listint_t list
 * @head: pointer to head node
 * @index: index of node to return
 * Return: pointer to node @ index position, or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}

	return (node);
}
