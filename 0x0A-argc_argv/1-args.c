#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: count the number of argument inputted on the command line
 * @argv: store the string value of input on the cmd when the code is being run
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
