#include "main.h"
/**
 * puts2 - prints every other characters of a string, starting with the 1st character followed by a new line
 * @str: Input checker
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
