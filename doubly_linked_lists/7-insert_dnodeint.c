#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added, starting at 0
 * @n: value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node;
	unsigned int count;

	if (idx == 0)
		return (add_dnodeint(h, n));

	prev_node = *h;
	count = 0;

	while (prev_node != NULL && count < idx - 1)
	{
		prev_node = prev_node->next;
		count++;
	}

	if (prev_node == NULL)
		return (NULL);

	if (prev_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev_node;
	new_node->next = prev_node->next;
	prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
