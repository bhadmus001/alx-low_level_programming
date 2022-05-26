#include "lists.h"
/**
 * print_listint - print lists of integers
 * @h: a pointer to the list
 * Return: the number of element
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
