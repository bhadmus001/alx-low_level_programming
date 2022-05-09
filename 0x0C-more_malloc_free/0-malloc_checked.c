#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate a memory using malloc
 * @b: size of memory to allocate
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(*p) * b);

	if (p == NULL)
		exit(98);
	else
		return(p);
}
		
