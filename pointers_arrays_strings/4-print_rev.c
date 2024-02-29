#include "main.h"

/**
 * print_rev - function that prints a string, followed by a new line, to stdout
 *
 * @s: This is my input String
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
