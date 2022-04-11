#include <stdio.h>
/**
 *  main - Entry point
 *  Return: Always success (0)
 */
int main(void)
{
	char k = '0';
	char ch = 'a';

	while (k <= '9')
	{
	putchar(k);
	k++;
	}
	while (ch <= 'f')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
