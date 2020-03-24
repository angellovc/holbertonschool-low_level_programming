#include "lists.h"
/**
 *pop_listint - remove a head node into a linked list
 *@head: linked list
 *Return: element into a removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if ((*head) == '\0')
		return (0);
	tmp = (*head);
	n = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return (n);
}
