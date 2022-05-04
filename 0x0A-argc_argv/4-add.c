
#include <stdio.h>
#include <ctype.h>
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
	int i, sum;

	if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; ++i)
		{
			if (!(isdigit(argv[i])))
				printf("Error\n");
			else
				sum += atoi(argv[i]);
		}
			printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");
	return (1);
}
