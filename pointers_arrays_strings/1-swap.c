#include "main.h"

/**
 * swap_int(int *a, int *b) - function that swaps the values of two integers
 *
 * @n: This is the entry
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
