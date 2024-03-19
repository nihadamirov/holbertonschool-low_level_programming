#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  function that executes a function given
 * as a parameter on each element of an array
 * @array: integer array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
