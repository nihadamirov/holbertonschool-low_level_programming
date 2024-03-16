#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog.
* @d: struct dog.
*
* Return: no return.
*/
void print_dog(struct dog *d)
{
if (d)
{
if (!(d->name))
printf("Name: (nill)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (!(d->owner))
printf("Owner: (nill)\n");
else
printf("Owner: %s\n", d->owner);
}
}

dog_t *new_dog(char *name, float age, char *owner)
{
    return nullptr;
}

void free_dog(dog_t *d)
{
}
