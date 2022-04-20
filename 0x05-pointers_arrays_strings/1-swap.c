#include "main.h"
/**
 * swap_int - swap the inputs
 * @a: 1st input
 * @b: 2nd input
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
