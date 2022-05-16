#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds 2 number together
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts 2 number together
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys 2 number together
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 number together
 * @a: divider
 * @b: divisor
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}

/**
 * op_mod - find the modulos 2 number together
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}
