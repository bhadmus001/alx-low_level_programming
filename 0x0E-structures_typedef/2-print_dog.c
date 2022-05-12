#include "dog.h"
#include <stdio.h>
#include <stdlib>
/**
 * print_dog - print out the deatils of dog in struct dog
 * @d: pointer to the details to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	if (d->name == NULL)
	{
		printf("Name: %s\n Age: %.6f\n Owner: %s\n", "(nil)", d->age, d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\n Age: %.6f\n Owner: %s\n", d->name, d->age, "(nil)");

	}
	else
	printf("Name: %s\n Age: %.6f\n Owner: %s\n", d->name, d->age, d->owner);
}
