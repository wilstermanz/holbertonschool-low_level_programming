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
	hash_node_t *newNode, *checker;
	unsigned long int index;

	if (!ht || !key || (strcmp(key, "") == 0))
	{
		return (FAILURE);
	}

	index = key_index((const unsigned char *)key, ht->size);

	checker = ht->array[index];
	if (checker == NULL)
	{
		ht->array[index] = buildNode(key, value);
		return (SUCCESS);
	}

	while (checker != NULL)
	{
		if (strcmp(key, checker->key) == 0)
		{
			free(checker->value);
			checker->value = strdup(value);
			return (SUCCESS);
		}
		checker = checker->next;
	}
	newNode = buildNode(key, value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (SUCCESS);
}

/**
 * buildNode - builds a new hash_node_t node
 *
 * @key: given key for new node
 * @value: given value for new node
 * Return: pointer to new node
 */

hash_node_t *buildNode(const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		exit(FAILURE);
	}
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	return (newNode);
}
