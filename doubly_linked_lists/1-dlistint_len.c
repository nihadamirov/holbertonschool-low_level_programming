#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
