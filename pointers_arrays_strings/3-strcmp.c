#include "main.h"

/**
 * _strcmp - Write function that compares two strings
 * @s1: This is the input string
 * @s2: This is the input string
 *
 * Return: If the strings are equals return "0",
 * if not return other number
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 = 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
