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
	unsigned int len, len2, i, j;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	for (len = 0; name[len]; len++)
		;
		new_d->name = malloc(len * sizeof(char));
	if (new_d->name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		new_d->name[i] = name[i];
	new_d->age = age;
	for (len2 = 0; owner[len2]; len2++)
		;
		new_d->owner = malloc(len2 * sizeof(char));
	if (new_d->owner == NULL)
		return (NULL);
	for (j = 0; owner[j]; j++)
		new_d->owner[j] = owner[j];
	return (new_d);
}
