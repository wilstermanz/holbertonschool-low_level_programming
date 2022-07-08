#include "lists.h"

/**
 * add_node_end - Adds a new node to end of a list_t list
 * @head: pointer to head node
 * @str: element to add to new node
 * Return: address of new element, or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*node));
	list_t *temp;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (str == NULL)
	{
		free(node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = node;
		node->len = strlen(str);
		node->str = strdup(str);
		node->next = NULL;
		return (node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	return (node);
}
