#include "lists.h"

/**
 * add_dnodeint_end - Adds new node to end of dlistint_t list
 *
 * @head: pointer to head node.
 * @n: data to add to node.
 *
 * Return: Address of new node, or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *ptr;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}

	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	newNode->prev = ptr;
	ptr->next = newNode;

	return (newNode);
}
