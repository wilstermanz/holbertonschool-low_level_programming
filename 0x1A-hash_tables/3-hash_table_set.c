#include "hash_tables.h"
#define SUCCESS 1
#define FAILURE 0

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: pointer to hash table
 * @key: Given key
 * @value: value associated with key
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int index;

	if (!ht || !key || !value || (strcmp(key, "") == 0))
	{
		return (FAILURE);
	}

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		return (FAILURE);
	}

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
	}
	if (ht->array[index] != NULL)
	{
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
	}
	return (SUCCESS);
}
