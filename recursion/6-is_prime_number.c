#include "main.h"

 /**
 * is_prime_number - checks if the given number is a prime number
 * @n: the number to check
 *
 * Description: This function checks if a given number is a prime number.
 * It uses the is_prime function to perform the check.
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

 /**
 * is_prime - checks if a given number is prime using recursion
 * @n: number to be checked
 * @start: number to start checking from
 *
 * Description: This function checks if a given number is prime using recursion.
 * It starts checking from the given start number and continues
 * until it reaches 1.
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
