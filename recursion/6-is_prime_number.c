#include "main.h"

 /**
 * is_prime_number -  function checks if the input integer is a prime number.
 * a prime number, otherwise return 0.
 * @n: the number to check
 *
 * Return: true if the number is prime
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

 /**
 * is_prime - function checks if an integer is prime.
 * @n: number to be checked
 * @start: number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
