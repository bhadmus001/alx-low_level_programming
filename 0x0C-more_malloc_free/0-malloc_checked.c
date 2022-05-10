#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate a memory using malloc
 * @b: size of memory to allocate
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
