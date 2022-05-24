#include "lists.h"
/**
 * free_list - frees the allocated memory
 * @head: pointer to the lis
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
