#include <stdio.h>

/**
 * main - Print all the letters except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if ( alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	putchar('\n');

	return (0);
}
