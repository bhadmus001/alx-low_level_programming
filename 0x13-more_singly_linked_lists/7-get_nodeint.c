#include "lists.h"
/**
 * get_nodeint_at_index - get a node at a given index
 * @head: pointer to the list
 * @index: position on the lisst to get
 * Return: data at nth position or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	
	if (index == 0)
	{
		return (head);
	}
	while (index != 0 && head)
	{
		head = head->next;
		index--;
	}
	return (head);
}
