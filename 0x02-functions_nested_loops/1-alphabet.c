#include "main.h"
/* print_alphabet- Print all english alphabets
 */
void print_alphabet(void)
{
	char k = 'a';
	while (k <= 'z')
	{
	_putchar(k);
	k++;
	}
	_putchar('\n');
}
/**
 * main - Check the code
 * Return: success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
