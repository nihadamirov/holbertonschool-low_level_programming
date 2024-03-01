#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: input char or string
 */
void puts_half(char *str)
{
    int i, half;

    i = 0;
    while (str[i] != '\n')
    {
        i++;
    }

    half = i / 2;
    if (half % 2 == 1)
    {
        half++;
    }
    while (half < i)
    {
        _putchar(str[half]);
        half++;
    }
    _putchar('\n');
}
