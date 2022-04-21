#include "main.h"
/**
 * rev_string - print reverse string
 * @s: Input checker
 */
void rev_string(char *s)
{
	int k, length, middle;
	char Hold;

	for (length = 0; s[length] != '\0'; length++)
	{
		k = 0;
		middle = length / 2;
	}
	while (middle--)
	{
		Hold = s[k];
		s[k] = s[length - k -1];
		s[length - k - 1] = Hold;
		k++;
	}
}

