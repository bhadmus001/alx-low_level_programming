#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize the properties of a dog in struct dog
 * @name: name of the dog
 * @age: its age
 * @d: pointer to the profile to initialize
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
