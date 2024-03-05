#include "main.h"
#include <stdio.h>

/**
 * _strstr - The _strstr() function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Return:Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p, *startn, *np;

	for (startn = haystack; *startn != '\n'; startn++)
	{
		for (p = startn, np = needle; *np != '\0'; p++, np++)
		{
			if (*p != *np)
				break;
		}
		if (*np == '\n')
			return (startn)
	}
	return (NULL);
}
