#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: shows the number of argument on the command line
 * @argv: save the string value of argument inputted on the command line
 * Return: 0 upon success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

