#include "main.h"
#include <string.h>

/**
* is_palindrome - returns true if the given string is a palindrome
* @s: string to check
* Return: true if the given string is a palindrome
*/
int is_palindrome(char *s)
{
    int i;
    int len = strlen(s);

    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        return (0);
    }
    return (1);
}
