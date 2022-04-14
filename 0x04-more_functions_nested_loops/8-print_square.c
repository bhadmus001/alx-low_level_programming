#include "main.h"
/**
 *print_square - draw square
 *@size: character input
 */
void print_square(int size)
{
	int a, b;

	if (size == 0)
	{
		_putchar('\n');
	}
	a = 1;
	while (a <= size)
	{
		b = 1;
		while (b <= size)
		{
		_putchar('#');
		b++;
		}
		_putchar('\n');
		a++;
	}
}


