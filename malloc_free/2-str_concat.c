#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2);
{
	if (!s1) s1 = "";
	if (!s2) s2 = "";

	char *concat;
	int i = 0, j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concat = malloc((i + j + 1) * sizeof(char));
	if (!concat)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		concat[i + j] = s2[j];
	
	
	concat[i + j] = '\0';

	return (concat);
}
