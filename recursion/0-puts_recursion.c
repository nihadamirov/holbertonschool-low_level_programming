#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s - input char
 * Return: returns void
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
