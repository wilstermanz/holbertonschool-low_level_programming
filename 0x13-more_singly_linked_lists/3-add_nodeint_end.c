#include "lists.h"

/**
 * add_nodeint_end - Adds new node to end of listint_t list
 * @head: pointer to head node
 * @n: integer to add to list
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *ptr = *head;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
		newNode->n = n;
		newNode->next = NULL;
		return (newNode);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = newNode;
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
