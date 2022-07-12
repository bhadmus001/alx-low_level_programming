#include "main.h"
/**
 * _memset - fill a block of specified memory with a particular value
 * @s: starting address of the memory to be filled
 * @b: the desired value to be filled
 * @n: the number of bytes to be filled
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
