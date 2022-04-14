#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int a, n;

	n = 0;
	while (n <= 9)
	{
		a = 0;
		while (a <= 14)
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		n++;
	}
}
int main(void)
{
	more_numbers();
	return (0);
}

