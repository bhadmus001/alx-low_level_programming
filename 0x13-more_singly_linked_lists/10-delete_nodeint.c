#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a specified node
 * @head: pointer to the head of a list
 * @index: index of the node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *ptr, *temp = *head;

	if (!head)
		return (-1);
	if (index == y)
	{
		ptr = temp->next;
		free(temp);
		*head = ptr;
	}
	else
	{
	while (y < index && *head)
	{
		ptr = temp;
		temp = temp->next;
		y++;
	}
	ptr->next = temp->next;
	free(temp);
	}
	return (1);
}
