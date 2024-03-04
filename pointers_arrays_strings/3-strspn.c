#include "main.h"

/**
 * _strspn - search the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * @s:segment targeted
 * @accept:reference bytes container
 *
 * Return:returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
