#include "main.h"

/**
 * _strcpy - Copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\n';

	return start;
}
