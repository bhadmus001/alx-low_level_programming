#include <stdio.h>

/**
* main - Entry point
* Return: Always zero (success)
*/

int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar ('\n');
	return (0);
}
