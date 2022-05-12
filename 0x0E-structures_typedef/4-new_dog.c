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
	unsigned int i, j;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	if (new_d->name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		new_d->name[i] = name[i];
	new_d->age = age;
	if (new_d->owner == NULL)
		return (NULL);
	for (j = 0; owner[j]; j++)
		new_d->owner[j] = owne[j];
	return (new_d);
}
