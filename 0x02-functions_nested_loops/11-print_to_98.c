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
		while (n <= 98 || n == 0)
		{
		if (n != 98)
		{
		printf("%i, ", n);
		}
		else
			printf("%i", n);
		n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
		if (n != 98)
		{
		printf("%i, ", n);
		}
		else
			printf("%i", n);
		n--;
		}
	}
	else
		printf("%i", n);
	printf("\n");

}
