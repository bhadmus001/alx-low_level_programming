#include "main.h"
/**
 *  *_strncat - it adds 2 strings together
 * @dest: destination
 * @src: source
 * @n: length to be copied
 * Return: return the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, j;

	k = 0;
	while (dest[k] != 0)
	{
		k++;
	}
	j = 0;
	while (src[j] != 0 && j < n)
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	return (dest);
}
