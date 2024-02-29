#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: Pointer to a character string.
 * Return: void.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result > 0)
			break;
		s++;
	}
	return result * sign;
}
