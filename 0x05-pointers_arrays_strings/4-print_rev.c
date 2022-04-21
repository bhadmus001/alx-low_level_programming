#include "main.h"
/**
 * print_rev - Print text in reverse form
 * @s: Input checker
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	i++;
	while (s[i])
	{
		_putchar(s[i]);
		_putchar('\n');
	}

}
