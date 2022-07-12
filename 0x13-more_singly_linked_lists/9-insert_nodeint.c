#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given postion
 * @head: pointer to head node
 * @idx: index of position to add new node
 * @n: data to insert in new node
 * Return: address of new node, or NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *newNode = malloc(sizeof(*newNode));
	unsigned int i;

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = ptr;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	newNode->next = ptr->next;
	ptr->next = newNode;
	newNode->n = n;

	return (newNode);
}
