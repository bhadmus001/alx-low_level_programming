#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 * Return: return result
 */
int _strcmp(char *s1, char *s2)
{
	int j, k;

	j = 0;
	k = 0;
	while (s1[j] != '\0' && k == 0)
	{
		k = s1[j] - s2[j];
		j++;
	}
	return (k);
}
