#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * @s: pointer to the string inputted
 * Return: return the length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);

}

int main(void)
{
	int n, k;

	n = _strlen_recursion("cabin");
	k = _strlen_recursion(" ");
	printf("n: %d\n k: %d\n", n, k);
	return (0);
}
