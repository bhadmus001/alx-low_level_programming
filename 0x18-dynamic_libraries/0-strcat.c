#include "main.h"
/**
 *  *_strcat - it adds 2 strings together
 * @dest: destination
 * @src: source
 * Return: return the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int k, j;

	k = 0;
	while (dest[k] != 0)
	{
		k++;
	}
	j = 0;
	while (src[j] != 0)
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	return (dest);
}
