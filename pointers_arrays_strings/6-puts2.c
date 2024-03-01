#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: this is my input String
 */
void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i+=2)
    {
	    if (str[i] >= 32 && str[i] <= 126)
	    {
		    _putchar(str[i]);
	    }
    }
    _putchar('\n');
}
