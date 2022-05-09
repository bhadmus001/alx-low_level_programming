#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - print a 2 dimensional array
 * @height: height of the grid
 * @width: width of the grid
 * Return: a pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int i, k;
	int *p;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(*p) * width * height);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			p[k] = 0;

		}
		_putchar('\n');
	}
		_putchar('\n');
		free(p);
	return (0);
}

