#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer of first node of dlistint list
 * @idx: index of the list where the new node should be added
 * @n: integer to be included in new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current && i < idx)
	{
		i++;
		current = current->next;
	}

	if (!current && i == idx)
		return (add_dnodeint_end(h, n));

	if (current)
	{
		new_node = malloc(sizeof(dlistint_t));

		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->prev = current->prev;
		new_node->next = current;
		current->prev->next = new_node;
		current->prev = new_node;

		return (new_node);
	}
	return (NULL);
}
