#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication
 * of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int i, j, num;

if (argc <= 2)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);
j = atoi(argv[2]);
num = i *j;

printf("%d\n", num);
return (0);
}
