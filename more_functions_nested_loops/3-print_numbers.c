#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
