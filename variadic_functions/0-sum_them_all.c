#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function sum of all its parameters
 * @n: the number of arguments the function will take
 * @...: indicates that the function can
 * take any number of arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, n);

	va_end(ptr);

	return (sum);
}
