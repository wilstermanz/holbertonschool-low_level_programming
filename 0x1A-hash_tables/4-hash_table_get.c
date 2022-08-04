#include "hash_tables.h"

/**
 * hash_table_get - retrieves value from hash table for given key
 *
 * @ht: pointer to hash table
 * @key: given key
 * Return: value for given key, or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *checker;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[index];

	while (checker != NULL)
	{
		if (strcmp(key, checker->key) == 0)
		{
			return (checker->value); /* EXIT SUCCESS */
		}
		checker = checker->next;
	}

	return (NULL); /* EXIT FAILURE */
}
