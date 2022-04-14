#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int a, n = 0;

	while (n <= 9)
	{
		a = 0;
		while (a <= 14)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}

