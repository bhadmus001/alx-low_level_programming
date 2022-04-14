#include "main.h"
/**
 * print_line - Draw a line
 * @n: reads in input
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	line = 1;
	while (line <= n)
	{
		_putchar('_');
		line++;
	_putchar('\n');
	}
}
