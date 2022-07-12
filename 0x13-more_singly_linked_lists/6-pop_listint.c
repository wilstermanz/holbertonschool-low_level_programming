#include "lists.h"

/**
 * pop_listint - Deletes head node and returns its data
 * @head: pointer to head node
 * Return: data from head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int out;

	if (*head == NULL)
		return (0);

	*head = temp->next;
	out = temp->n;
	free(temp);

	return (out);
}
