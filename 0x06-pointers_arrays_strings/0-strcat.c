#include "main.h"
/**
 *  *_strcat - it adds 2 strings together
 * @dest: destination
 * @src: source
 * Return: return the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	while (*src != '\0')
	*dest += *src;
	return (*dest);
}
