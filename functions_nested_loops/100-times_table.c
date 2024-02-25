#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void functions_nested_loops(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;

				if (z == 0)
				{
					_putchar(z + '0');
				}
				else if (z < 10 && z != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
