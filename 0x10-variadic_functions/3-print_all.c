#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: datatype of the argument
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *j, k;
	int i, n;
	float m;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c')
		{
			k = (char) va_arg(ptr, int);
				printf("%c, ", k);
		}
		else if (format[i] == 'i')
		{
			n = va_arg(ptr, int);
			printf("%d, ", n);
		}
		else if (format[i] == 'f')
		{
			m = va_arg(ptr, double);
			printf("%f, ", m);
		}
		else if (format[i] == 's')
		{
			j = va_arg(ptr, char *);
			if (j != NULL)
			{
				printf("%s, ", j);
			}
			else
				printf("(nil)");
		}
		i++;
	}
	putchar('\n');
	va_end(ptr);
}
