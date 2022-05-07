

#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenate 2 string
 * @s1: 1st string
 * @s2: 2nd string
 * Return: return a pointer to the newly formed string
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *r;
	unsigned int length;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (s2[length] != '\0')
	{
		length++;
	}
	while (s1[length] != '\0')
	{
		length++;
	}

	p = (char *) malloc(sizeof(char) * (length + 1));

	if (!p)
	{
		return (NULL);
	}
	r = p;
	while (*s1)
	{
		*r++ = *s1++;
	}
	while (*s2)
	{
		*r++ = *s2++;
	}
	*r = 0;
	return (r);
}
