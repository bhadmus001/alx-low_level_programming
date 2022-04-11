#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero (success)
 */

int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar ('\n');
	return (0);
}

