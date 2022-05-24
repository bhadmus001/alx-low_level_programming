#include <stdio.h>
#include "lists.h"
/**
 * list_len - list the element in a list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	while (h)
	{
		h = h->next;
		i++;
	}
	return(i);
}
