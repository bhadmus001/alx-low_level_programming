#include "lists.h"
/**
 * add_node - adds a node to the begining of a list
 * @head: 1st node of the list
 * @str: pointer to the string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
