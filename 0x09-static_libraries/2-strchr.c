#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: pointer to the string inputted
 * @c: characer to look for
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&c[i]);
	}
	return (0);
}
