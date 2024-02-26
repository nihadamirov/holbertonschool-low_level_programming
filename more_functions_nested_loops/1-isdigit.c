#include "main.h"

/**
 * _isdigit(int c) - function that  checks for a digit (0 through 9).
* @c: tested character
* Return: returns 1 if it is a digit , 0 if not
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
