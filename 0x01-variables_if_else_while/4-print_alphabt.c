#include <stdio.h>
/**
 * main- Entry point
 * Return: Always success (0)
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
	if (k != 'e' && k != 'q')
	{
	putchar(k);
	k++;
	}
	}
	putchar('\n');
	return (0);
}
