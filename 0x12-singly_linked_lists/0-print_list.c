#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to first node of list
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node)
	{
		if (node->str)
			printf("[%d] %s\n", node->len, node->str);
		if (!node->str)
			printf("[%d] %s\n", 0, "(nil)");
		node = node->next;
		count++;
	}

	return (count);
}

