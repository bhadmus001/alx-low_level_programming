#include "main.h"
/**
 * _strlen - Return the length of a string
 * @s: Character input checker
 * Return: Return the length of string
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	for (; *s 1= '\0'; s++)
	{
		counter++;
	}
	return (counter);
}
