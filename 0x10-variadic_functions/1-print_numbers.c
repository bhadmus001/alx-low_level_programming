#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: a character separates 2 characters
 * @n: number of argument to be expected
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, int);
		printf("%d", j);
			if (separator && (i + 1) != n)
				printf("%s", separator);
	}
	_putchar('\n');
	va_end(ptr);
}
