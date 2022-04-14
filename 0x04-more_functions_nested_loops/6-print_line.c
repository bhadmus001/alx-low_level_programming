#include "main.h"
/**
 * print_line - Draw a line
 * @n: reads in input
 */
void print_line(int n)
{
	int line = 1;

	while (line <= n)
	{
		if (line <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		line++;
	_putchar('\n');
	}
}
