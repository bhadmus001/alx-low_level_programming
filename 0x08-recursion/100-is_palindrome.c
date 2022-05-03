#include "main.h"
/**
 * long_c - checker of a string
 * @k: inputted number
 * Return: always 0
 */
int long_c(char *k)
{
	if (*k != '\0')
	{
		return (1 + long_c(k + 1));
	}
	return (0);
}
/**
 * compare - conduct comparison check
 * @s: pointer to input
 * @i: length of input
 * Return: 0 on success
 */
int compare(char *s, int i)
{
	if (i <= 0)
	{
		return (1);
	}
	if (*s == *(s + (i - 1)))
	{
	return (compare(s + 1, i - 2));
	}
	else
	return (0);
}
/**
 * is_palindrome - check if a number is palindrone
 * @s: pointer to number inputted
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i;

	i = long_c(s);
	return (compare(s, i));
}

