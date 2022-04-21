#include "main.h"
/**
 * puts_half - Print half of a sstring
 * @str: input checker
 */
void puts_half(char *str)
{
	int length, middle;

	for (length = 0; str[length] != '\0'; length++)
	;
	if (length % 2 == 0)
	{
		middle = length / 2;
	}
	else
	{
		middle = ((length - 1) / 2) + 1;
	}
	while (middle < length)
	{
		_putchar(str[middle]);
		middle++;
	}
	_putchar('\n');
}
