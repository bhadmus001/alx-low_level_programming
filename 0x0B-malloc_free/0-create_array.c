#include "main"
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: size of array
 * @c: charater to initialize
 * Return: return a pointer to the character
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
