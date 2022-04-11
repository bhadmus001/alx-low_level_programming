#include <stdio.h>
/**
 * main - Entry point
 * Return: Always success (0)
 */
int main(void)
{
	char k = 'a';
	char u = 'A';

	while (k <= 'z')
	{
	putchar(k);
	k++;
	}
	while (u <= 'Z')
	{
	putchar(u);
	u++;
	}
	putchar('\n');
	return (0);

}
