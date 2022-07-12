#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: length to be copied
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	k = k;
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}


