#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print out the deatils of dog in struct dog
 * @d: pointer to the details to be printed
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->owner == NULL && d->name == NULL)
	{
		printf("Name: (nil)\nAge: %.6f\nOwner: (nil)\n", d->age);
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: (nil)\n", d->name, d->age);

	}
	else
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
