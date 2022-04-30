#include "main.h"

/**
 * sqrt_c - check for the square root
 * @x: value to be checked
 * @y: possible value
 * Return: square root
 */
int sqrt_c(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
		return (-1);
	return (sqrt_c(x, y + 1));
}
/**
 * _sqrt_recursion - return the square root
 * @n: value to calculate its square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_c(n, 0));
}
