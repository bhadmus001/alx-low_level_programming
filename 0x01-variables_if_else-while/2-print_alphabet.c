#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero (success)
 */

int main(void)
{
	char k = 'a';
	char x = ' ';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar(x);
	return (0);
}

