#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a:matrix to be summed
 * @size:size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	if (i == j)
	{
		
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i == j || i + j == n - 1)
				{
					sum = sum + a[i][j];
				}
			}
		}
		printf("%d\n", sum);
		
		return (0);
	}
}
