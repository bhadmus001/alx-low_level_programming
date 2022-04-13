#include "main.h"
/**
 * print_alphabet_x10 - Print the english alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int u = 0;
	char v;

	while (u <= 9)
	{
		v = 'a';
		while (v <= 'z')
		{
			_putchar(v);
			v++;
		}
	_putchar('\n');
	u++;
	}
}
