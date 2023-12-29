#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key in a hash table.
 * @key: The key string.
 * @size: The size of the array of the hash table.
 *
 * Return: Index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
