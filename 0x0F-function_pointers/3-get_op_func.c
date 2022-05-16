#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the operator of the operation to be performed
 * @i: 1st number
 * @j: 2nd number
 * @s: 
 * return:  a null or the function of operation to be performed
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
	while (i < 6)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	/*return (NULL);*/
	return (0);

}


