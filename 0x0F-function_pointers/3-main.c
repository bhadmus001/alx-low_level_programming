#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of argument passed on compilation
 * @argv: string equivalence of argument passed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (atoi(argv[2]) == atoi("+") || atoi(argv[2]) == atoi("-") || atoi(argv[2]) == atoi("*") || atoi(argv[2]) == atoi("/") ||atoi(argv[2]) == atoi("%"))
		{
			get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		}
	return (0);

}
