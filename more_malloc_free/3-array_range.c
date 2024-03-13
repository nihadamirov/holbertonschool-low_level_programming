#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return: return pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arr = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
		ptr[arr] = min;
	min++;
	arr++;

	return (ptr);
}
