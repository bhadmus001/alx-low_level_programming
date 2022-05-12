#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - calculate the length of string
 * @str: string to be counted
 * Return: return the length of string
 */
int _strlen(char *str)
{
	int len;
	int count = 0;

	for (len = 0; str[len]; len++)
		count++;
	return (count);
}
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to the new string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

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

	if (name == NULL || owner == NULL)
		return (NULL);
	new_d = malloc(sizeof(dog_t));
		if (new_d == NULL)
			return (NULL);
	new_d->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	new_d->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	new_d->name = _strcpy(new_d->name, name);
	new_d->age = age;
	new_d->owner = _strcpy(new_d->owner, owner);
	return (new_d);
	free(new_d);
}
