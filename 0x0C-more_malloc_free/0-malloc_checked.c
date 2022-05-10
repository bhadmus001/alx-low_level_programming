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
	{
		return (98);
	}
	else
	{
		return (p);
	}
}
