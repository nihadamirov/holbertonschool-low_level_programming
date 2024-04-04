#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function that calculates the length of a string
 * @str: Const char pointer for the string to be measured
 * Return: Unsigned integer value representing the length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @str: Const char pointer for data to be added
 * Return: List with new node for list_t list, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
	}
	return (new_node);
}
