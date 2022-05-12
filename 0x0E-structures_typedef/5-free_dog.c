#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the allocated memory space
 * @d: pointer to the location to the freed
 * Description: frees the previously allocated memory
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
