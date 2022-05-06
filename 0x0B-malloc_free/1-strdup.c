
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create an a space and copy a string given as parameter
 * @str: string to be copied
 * Return: return a pointer to the character
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int length, i;

	if (str == '\0')
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	p = (char *) malloc(sizeof(char) * (length + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		p[i] = str[i];
	}
	p[length] = '\0';
	return (p);
}
