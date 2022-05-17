#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: datatype of the argument
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *j;
	int i = 0, k, c = 0;
	const char *s = "cifs";
	va_list ptr;

	va_start(ptr, format);
	while (format && format[i])
	{
		k = 0;
		while (s[k])
		{
			if (format[i] == s[k] && c)
			{
				printf(", ");
				break;
			}
		k++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ptr, int)), c = 1;
			break;
		
		case 'i':
			printf("%d", va_arg(ptr, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ptr, double)), c = 1;
			break;
		case 's':
			j = va_arg(ptr, char *), c = 1;
			if (!j)
			{
				printf("(nil)");
				break;
			}
			printf("%s", j);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
