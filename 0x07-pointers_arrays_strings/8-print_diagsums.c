#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of a diagonal of a matrix
 * @a: a pointer to the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;
	for (i = 0; i < size; i++)
	{
		sum_1 = sum_1 + a[i];
		sum_2 = sum_2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", sum_1);
	printf("%d, ", sum_2);
}
