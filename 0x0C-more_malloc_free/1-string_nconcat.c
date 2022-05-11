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
	unsigned int len, i, j;
	char *p;

	if (s1 == NULL)
		i = 0;

	for (len = 0; s1[len]; len++)
		;
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	p = malloc(sizeof(*p) * (len + n + 1));
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

