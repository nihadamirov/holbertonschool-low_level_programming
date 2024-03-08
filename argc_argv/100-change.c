#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 otherwise.
*/
int main(int argc, char *argv[])
{
int coins = 0;
int denominations[] = {25, 10, 5, 2, 1};
int i, cents;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5; i++)
{
coins += cents / denominations[i];
cents %= denominations[i];
}
printf("%d\n", coins);

return (0);
}
