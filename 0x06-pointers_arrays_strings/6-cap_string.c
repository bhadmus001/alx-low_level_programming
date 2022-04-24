#include "main.h"
/**
 * cap_string - capitalize all letters in a string
 * @s: pointer to inputted string
 * Return: return the capitalized string
 */
char *cap_string(char *s)
{
	int j, k;

	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 32, 10, 9};

	j = 0;

	while (s[j] != '\0')
	{
		if (j == 0 && s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
		k = 0;
		while (c[k] != '\0')
		{
			if (c[k] == s[j] && (s[j + 1] >= 97 && s[j + 1] <= 122)
			{
				s[j + 1] = s[j + 1] - 32;
			}
			k++;
		}
		j++;
	}
	return (s);
}
