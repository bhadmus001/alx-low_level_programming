#include <stdio.h>
/**
 * main - Entry point
 * Return: Always successs (0)
 */
int main(void)
{
	int j;

	j = '0';
	while (j <= '9')
	{
	putchar (j);
	j++;
	}
	putchar ('\n');
	return (0);
}
