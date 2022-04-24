#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: pointer to inputted character
 * Return: return the encoded character
 */
char *leet(char *s)
{
	int j, k;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	j = 0;
	while (s[j] != '\0')
	{
		k = 0;
		while (c[k] != '\0')
		{
			if (s[j] == c[k])
			{
				s[j] = c[k];
			}
			k++;
		}
		j++;
	}
	return (s);
}
