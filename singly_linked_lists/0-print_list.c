#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Const pointer of structure list_t
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		index++;
	}
	return (index);
}
