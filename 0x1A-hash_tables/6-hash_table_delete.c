#include "hash_tables.h"

/**
 * hash_table_delete - Deletes and frees a hash table
 *
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			free(ptr->key);
			free(ptr->value);
			ht->array[i] = ptr->next;
			free(ptr);
			ptr = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}
