#include "lists.h"
/**
 * pop_listint - deletes the head of a list
 * @head: pointer to the list
 * Return: 0 or the popped out node's data
 */
int pop_listint(listint_t **head)
{
	int result;
	listint_t *ptr;
	listint_t *ptr2;

	if (!*head)
		return (0);
	ptr2 = *head;
	result = ptr2->n;
	ptr = ptr2->next;
	free(ptr2);
	*head = ptr;
	return (result);

}
