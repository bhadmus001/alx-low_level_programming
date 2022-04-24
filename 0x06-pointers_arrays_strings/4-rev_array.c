#include "main.h"
/**
 * reverse_array - it reversses the string
 * @a: pointer to string inputted
 * @n: lengtthof string to be reversed
 */
void reverse_array(int *a, int n)
{
	int k;
	int temp;

	k = 0;
	n = n - 1;
	while (k < n)
	{
		temp = a[k];
		a[k] = a[n];
		a[n] = temp;
		k++;
		n--;
	}
}
