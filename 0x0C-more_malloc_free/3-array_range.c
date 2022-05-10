#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to the array the craeted
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * (max + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
