#include "main.h"
/**
 * _strlen - Return the length of a string
 * @s: Character input checker
 * Return: Return the length of string
 */
int _strlen(char *s)
{
	int i, j, counter;

	i = *s;
	counter = 0;
	for (j = 0; j <= i; j++)
	{
		counter++;
	}
	return (counter);
}
