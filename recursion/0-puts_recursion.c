#include "main.h"

/**
 * _puts_tecursion - function that prints a string
 * @s - input char
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ("\n");
	}
	else 
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
