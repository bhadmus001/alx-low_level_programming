#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of a list
 * @head: pointer to the list
 * @n: the data on the list
 * Return: address to the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = *head;
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode)
		return (NULL);
	NewNode->n = n;
	NewNode->next = NULL;
	if (!*head)
	{
		*head = NewNode;
		return (NewNode);
	}
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = NewNode;
	return (NewNode);
}
