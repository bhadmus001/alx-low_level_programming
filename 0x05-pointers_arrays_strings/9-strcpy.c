#include "main.h"
/**
 * _strcpy - copy string from source to destination
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	k = -1;
	do {
		k++;
		dest[k] = src[k];
	} while (src[k] != '\0');
	return (dest);
}
