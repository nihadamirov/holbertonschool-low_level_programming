#include <stdio.h>
#include <math.h>

/**
 * main- prints the largest prime factor
 * of a number
 * Return: returns 0
 */
int main(void)
{
	long num = 612852475143;
	long largest;
	long i;

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}

	largest = num;
	printf("%ld\n", largest);

	return (0);
}
