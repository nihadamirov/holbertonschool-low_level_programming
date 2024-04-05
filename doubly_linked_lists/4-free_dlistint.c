#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
