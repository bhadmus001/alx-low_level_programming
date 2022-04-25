#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @s: string to be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int j, k;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	j = 0;
	while (s[j] != '\0')
	{
		k = 0;
		while (alpha[k] != '\0')
		{
			if (s[j] == alpha[k])
			{
				s[j] = rot[k];
				break;
			}
			k++;
		}
		j++;
	}
	return (s);
}


