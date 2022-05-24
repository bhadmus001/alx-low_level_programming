#include "lists.h"
/**
 * free_list - frees the allocated memory
 * @head: pointer to the lis
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
