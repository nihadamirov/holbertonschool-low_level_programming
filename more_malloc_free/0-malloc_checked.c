#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * _malloc_checked - allocate memory
 * @b: unsigned int
 * Return: pointer allocate memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if(ptr == NULL)
		exit(98);

	return (ptr);
}
