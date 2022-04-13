#include <stdio.h>
#include "main.h"
/**
 * print_to_98- prints numbers to 98
 * @n: character check
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
		printf("%i", n);
		_putchar(',');
		_putchar(' ');
		n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
		printf("%i", n);
		_putchar(',');
		_putchar(' ');
		n--;
		}
	}
	else if (n == 0)
	{
		while (n <= 98)
		{
		printf("%i", n);
		_putchar(',');
		_putchar(' ');
		n++;
		}
	}
	else
		printf("%i", n);

}
