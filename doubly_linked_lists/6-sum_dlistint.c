#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of all the data (n) of a dlistint_t linked list,
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
