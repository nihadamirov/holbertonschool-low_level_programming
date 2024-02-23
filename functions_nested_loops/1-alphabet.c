#include "main.h"

/**
 * main - Make the alphabet
 * Return: Always 0 (Succcess)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}

