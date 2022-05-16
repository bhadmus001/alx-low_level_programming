#include "variadic_functions.h"
/**
 * sum_them_all - sum all arguments
 * @n: number of expected arguments
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ptr;

	va_start(ptr, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);

}
