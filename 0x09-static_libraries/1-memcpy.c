#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j, k;

	j = 0;
	k = n;
	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
