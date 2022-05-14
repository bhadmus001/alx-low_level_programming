#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
/**
 * get_op_func - gets the operator of the operation to be performed
 * @i: 1st number
 * @j: 2nd number
 * @s: 
 * return: 
 */
int (*get_op_func(char *s))(int i, int j)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i;

	i = 0;
	while ()
	{
		if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
		{
			return (NULL);
		}

	return (op_t ops[i]);
}


