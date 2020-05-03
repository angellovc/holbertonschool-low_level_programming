#include "lists.h"
/**
 *sum_dlistint - sum all the elements into a linked list
 *@head: linked list
 *Return: sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int result = 0;

	if (head == '\0')
		return (0);
	node = head;
	while (node != '\0')
	{
		result = result + node->n;
		node = node->next;
	}
	return (result);
}
