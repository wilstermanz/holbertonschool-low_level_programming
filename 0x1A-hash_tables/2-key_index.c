#include "hash_tables.h"

/**
 * key_index - Gives index of key
 * @key: given key
 * @size: size of array of hash table
 * Return: index where key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
