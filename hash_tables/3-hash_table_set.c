#include "hash_tables.h"

/**
 * hash_table_set - set or change a value in the hash table array
 * @key: pointer of key used of the hash table
 * @value: pointer of the value we want to change or set
 * Return: don't know for the moment
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;
	char *value_copy, *key_copy;

	if (ht == NULL)
		return (0);
	if ((key == NULL) || (key[0] == '\0'))
		return (0);
	if (value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);

			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(node);
		return (0);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		free(node);
		return (0);
	}

	node->key = key_copy;
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
