#include "main.h"

/**
 * swap_int(int *a, int *b) - function that swaps the values of two integers
 * @a: this is the first entry
 * @b: this is the second entry
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
