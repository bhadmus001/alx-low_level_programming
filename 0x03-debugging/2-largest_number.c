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

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
		largest = b;
	return (largest);
}
