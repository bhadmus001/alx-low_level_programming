#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * @s: pointer to the string inputted
 * Return: return the length of string
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);

}
