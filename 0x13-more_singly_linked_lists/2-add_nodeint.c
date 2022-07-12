#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a listint_t list
 * @head: pointer to head node
 * @n: integer to add
 * Return: address of new element, or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;
	newNode->n = n;

	return (newNode);
}
