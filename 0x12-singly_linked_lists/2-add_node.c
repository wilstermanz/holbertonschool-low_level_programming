#include "lists.h"

/**
 * add_node - Adds a new node to beginning of a list_t list
 * @head: pointer to head node
 * @str: element to add to new node
 * Return: address of new element, or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t *));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = *head;
	*head = node;
	if (!str)
	{
		node->str = "(nil)";
		node->len = 0;
	}
	if (str)
	{
		node->str = strdup(str);
		node->len = strlen(str);
	}

	return (node);
}
