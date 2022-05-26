#include "lists.h"
/**
 * listint_len - display the number of element in a list
 * @h: pointer to the list
 * Return: the number of nodes in a list
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int i = 0;

		while (h)
		{
			h = h->next;
			i++;
		}
	return (i);
}
