#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers, followed by a new line
 * @a: this is my input string
 * @n: this input string length
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n-1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
