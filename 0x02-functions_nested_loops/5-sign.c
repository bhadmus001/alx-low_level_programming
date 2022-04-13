#include "main.h"
/**
 * print_sign - print check for relation
 * @n: parameter check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
		result = 0;
	_putchar('0');
	return (result);
}
