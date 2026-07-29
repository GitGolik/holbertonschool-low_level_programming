#include "hash_tables.h"

/**
 * create_node - create a node to help gain place in hash table set
 * @key: character
 * @value: value
 * Return: the node or NULL
 */
static hash_node_t *create_node(const char *key, const char *value)
{
    hash_node_t *node;
    char *key_copy, *value_copy;

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (NULL);

    key_copy = strdup(key);
    if (key_copy == NULL)
    {
        free(node);
        return (NULL);
    }

    value_copy = strdup(value);
    if (value_copy == NULL)
    {
        free(key_copy);
        free(node);
        return (NULL);
    }

    node->key = key_copy;
    node->value = value_copy;
    node->next = NULL;

    return (node);
}
