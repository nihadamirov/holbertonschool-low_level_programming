#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int x  = 0;

	for (x = 0; x <= 9; x++)
		if ((x != 2) && (x != 4))
			_putchar(x + '0');

	_putchar('\n');
}
