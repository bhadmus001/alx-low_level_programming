#include <stdlib.h>
#include "dog.h"
/**
 * dog_t *new_dog - creates a new dog profile
 * @name: dog name
 * @age: dog's age
 * @owner: owner's name
 * Return: a pointer to the new dog profile
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
