#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate 2 strings
 * @s1: pointer to the first string
 * @s2: pointer to the 2nd string
 * @n: length of string to concatenate
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, i, j;
	char *p;

	for (len = 0; s1[len]; len++)
		;
	p = malloc(sizeof(*p) * (len + n));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}

