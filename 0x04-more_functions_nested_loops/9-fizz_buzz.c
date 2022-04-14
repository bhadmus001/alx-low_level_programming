#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n = 1;
	int a, b, c;

		while (n <= 100)
		{
			a = n % 3;
			b = n % 5;
			c = n % 15;
		if (c == 0)
		{
			printf("FizzBuzz");
		}
		else if (a == 0)
		{
			printf("Fizz");
		}
		else if (b == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", n);
		}
		 putchar(' ');
		 n++;
		}
	printf("\n");
	return (0);
}
