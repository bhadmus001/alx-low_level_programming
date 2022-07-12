#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: substring to be searched
 * Return: always 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
