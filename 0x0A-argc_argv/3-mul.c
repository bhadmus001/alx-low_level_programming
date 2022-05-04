

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: count the number of argument inputted on the command line
 * @argv: store the string value of input on the cmd when the code is being run
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc > 1)
	{
		mul = 1;
		for (i = 1; i < argc; ++i)
		{
			mul *= atoi(argv[i]);
		}
			printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (1);
}
