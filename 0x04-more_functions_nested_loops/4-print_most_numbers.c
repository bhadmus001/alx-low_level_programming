#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 4 && n != 9)
		{
			_putchar(n);
		}
		putchar('\n');
		n++;
	}
}
