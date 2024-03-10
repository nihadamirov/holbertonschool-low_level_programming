#include "main.h"

/**
* wildcmp - Compares two strings and determines if they can be considered identical.
*
* This function takes two strings as input, s1 and s2, and checks if they can be considered identical.
* The string s2 can contain the special character '*', which can replace any string (including an empty string).
*
* @s1: The first string to compare.
* @s2: The second string to compare. This string can contain the special character '*'.
*
* Return: Returns 1 if the strings can be considered identical, otherwise returns 0.
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if(*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

return (0);
}
