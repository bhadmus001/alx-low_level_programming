#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - program that generate random valid passwords
*
* Return: 0
*/
int main(void)
{
	int pass[100];
	int i, sum = 0, n;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
