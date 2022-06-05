#include <stdio.h>

int main(void)
{
	int c;
	c = ' ';
	printf("Enter the character:\n");
	while (c != 'x')
	{
		c = getc(stdin);
		putchar(c);
	}
	printf("\nOut of the while loop. Bye!\n");
       return (0);
}       
