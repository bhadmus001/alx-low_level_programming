#include "main.h"
/**
 * string_toupper - change all lowercase in a string to uppercase
 * @s: pointer to the inputted string
 * Return: success
 */
char *string_toupper(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] >= 97 && s[k] <= 122)
		{
			s[k] = s[k] - 32;
		}
		k++;
	}
		return (s);
}
