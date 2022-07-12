#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: inputted string
 * @accept: substring to get its length
 * Return: Always 0 on success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (0);
		}
		s++;
	}
	return (n);
}
