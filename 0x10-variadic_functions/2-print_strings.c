
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: a character separates 2 strings
 * @n: number of argument to be expected
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, char *);
		if (j == NULL)
			printf("(nil)");
		else
		printf("%s", j);

			if ((i + 1) != n)
			{
				if (separator != NULL)
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(ptr);
}
