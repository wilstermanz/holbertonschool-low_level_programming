#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr == NULL)
		{
			continue;
		}
		while (ptr != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			flag = 1;
		}
	}
	printf("}\n");
}
