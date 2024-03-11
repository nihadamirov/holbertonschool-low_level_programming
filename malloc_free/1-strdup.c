#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a new string which is a duplicate of the string
 * @str: this is my input string
 * 
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char dup;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	char *dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
