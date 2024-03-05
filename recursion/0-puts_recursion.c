#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts_tecursion - function that prints a string
 * @s - input char
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf('\n');
	}
	else 
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
