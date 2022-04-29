#include "main.h"
/**
 * _pow_recursion - print the value of x raise to the power of y
 * @x: base value
 * @y: index value
 * Return: return the power of x to y
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
