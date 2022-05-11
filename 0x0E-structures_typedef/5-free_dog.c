#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the allocated memory space
 * @d: pointer to the location to the freed
 */
void free_dog(dog_t *d)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
		if (new_d == NULL)
			return (NULL);
		new_d->name = name;
		new_d->age = age;
		new_d->owner = owner;
		free(new_d);
		return (new_d);
}
