#include "main.h"
#include <stdio.h>
/**
 * print_array - print specified number of an array object
 * @a: pointer to the array to be printed
 * @n: number of objects to be printed
 */
void print_array(int *a, int n)
{
	int k;

	k = 0;
	while (k < n)
	{
		if (k == n - 1)
		{
			printf("%d\n", a[k]);
			break;
		}
		printf("%d, ", a[k]);
		k++;
	}
	if (n <= k)
	{
		_putchar('\n');
	}
}
