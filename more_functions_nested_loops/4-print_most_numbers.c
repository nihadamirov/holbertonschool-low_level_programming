#include "main.h"

/**
 * main - check the code
 * Description: Prints the numbers excluding 2 and 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int x  = 0;

	for (x = 0; x <= 9; x++)
		if ((x != 2) && (x != 4))
			_putchar(x + '0');

	_putchar('\n');
}
