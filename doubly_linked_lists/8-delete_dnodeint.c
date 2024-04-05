#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list
 * @head: pointer to pointer of first node of dlistint list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;

		if (current->next)
			current->next->prev = NULL;

		free(current);

		return (1);
	}

	while (current && i < index)
	{
		i++;
		current = current->next;
	}

	if (i == index && current)
	{
		current->prev->next = current->next;

		if (current->next)
			current->next->prev = current->prev;

		free(current);

		return (1);
	}
	return (-1);
}
