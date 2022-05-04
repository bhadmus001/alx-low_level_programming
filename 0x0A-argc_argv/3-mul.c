

#include <stdio.h>
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

	for(i = 1; i == argc; ++i)
	{
		if (argc > 1)
		{
			mul = 1;
			mul *= *argv[i];
		}
		else
			printf("Error\n");
	}
			printf("%d\n", mul);
	return (1);
}
