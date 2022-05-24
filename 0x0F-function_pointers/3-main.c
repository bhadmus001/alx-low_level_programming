#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of argument passed on compilation
 * @argv: string equivalence of argument passed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *op;

	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
	(strcmp(op, "+") &&
	strcmp(op, "-") &&
	strcmp(op, "*") &&
	strcmp(op, "/") &&
	strcmp(op, "%"))
	)
	{
	printf("Error\n");
	exit(99);
	}
	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && atoi(argv[3]) == 0)
	{
	printf("Error\n");
	exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
