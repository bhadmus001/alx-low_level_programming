#include <stdio.h>
/**
 *  main - Entry point
 *  Return: Always success (0)
 */

int main(void)
{
	int k;

	k = '0';
	while (k <= '9')
	{
	putchar(k);
	if (k != '9')
	{
	putchar(',');
	putchar(' ');
	}
	k++;
	}
	putchar('\n');
	return (0);

}
