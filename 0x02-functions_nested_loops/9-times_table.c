#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int a = 0;
	int b, result;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			result = a * b;
			if (b == 0)
			{
				_putchar(result);
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(result);
			}
			else
			{
				_putchar(result / 10);
				_putchar(result % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
