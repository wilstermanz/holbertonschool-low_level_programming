#include "lists.h"

/**
 * add_dnodeint - Adds new node to beginning of dlistint_t list
 * 
 * @head: pointer to head node
 * @n: data to add to node
 * 
 * Return: address of new node, or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}
