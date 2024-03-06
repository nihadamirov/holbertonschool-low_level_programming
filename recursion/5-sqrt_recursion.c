#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n 
 *
 */
int _sqrt_recursion(int n)
{
	if ( n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else 
	{
		int num = _sqrt_recursion(n - 1);

		if (num * num <= n)
			return (num);

		else 
			return (-1);
	}
}
