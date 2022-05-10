#include <stdlib.h>
#include "main.h"
/**
 * string_noncat - concatenate 2 strings
 * @s1: pointer to the first string and the destinatuon of the concatenated string
 * @s2: pointer to the 2nd string
 * @n: length of string to concatenate
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, *p;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	p = malloc(sizeof(*p) * len + n);
	if (p == NULL)
		return (NULL);

