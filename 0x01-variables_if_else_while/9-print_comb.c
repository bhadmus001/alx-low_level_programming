#include <stdio.h>
/**
 *  main - Entry point
 *  Return: Always success (0)
 */

int main(void)
{
	char k = '0';

	while (k <= '9')
	{
	putchar(k);
	putchar("\ ");
	putchar("\,");
	k++;
	}
	putchar("\n");
	return (0);

}
