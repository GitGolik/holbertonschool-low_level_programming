#include "hash_tables.h"

/**
 * key_index - get the result of the hash key
 * @key: pointer of the key used
 * @size: the size of the hash table array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
