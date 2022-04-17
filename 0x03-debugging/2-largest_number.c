#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: 1st integer
 * @b: 2nd integer
 * @c: 3rd integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c || (a > c && c > b))
	{
		largest = a;
	}
	else if (b > c && c > a || (b > a && a > c))
	{
		largest = b;
	}
	else
	{
	largest = c;
	}
	return (largest);
}
