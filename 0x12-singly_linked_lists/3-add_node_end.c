
#include "lists.h"
/**
 * add_node_end - adds a node to the end of a list
 * @head: 1st node of the list
 * @str: pointer to the string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	list_t *last = *head;

	new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);
	new_element->str = strdup(str);
	new_element->len = strlen(str);
	new_element->next = NULL;
	if (!*head)
	{
		*head = new_element;
		return (new_element);
	}
	while (last->next != NULL)
	last = last->next;
	last->next = new_element;
	return (new_element);
}
