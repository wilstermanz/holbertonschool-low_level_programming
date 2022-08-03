#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array to create
 *
 * Return: Pointer to hash table, or NULL in case of error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	newTable = malloc(sizeof(*newTable));
	if (newTable == NULL)
	{
		return (NULL);
	}
	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newTable->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		newTable->array[i] = NULL;
	}

	return (newTable);
}
