#include "lists.h"
/**
 * sum_listint - sum all data in a list
 * @head: pointer to the list
 * Return: o or sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
