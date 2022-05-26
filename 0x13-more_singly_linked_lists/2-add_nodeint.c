#include "lists.h"
/**
 * add_nodeint - add a node to the head of a list
 * @head: a pointer to the head of the list
 * @n: the data on the list
 * Return: NULL or the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
