#include "lists.h"
/**
 *get_dnodeint_at_index - get the  the nth node of a linked list.
 *@index: node number
 *@head: double linked list
 *Return: pointer to a node or Null in case it fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	if (head == '\0')
		return ('\0');
	node = head;
	index--;
	while (index && node != '\0')
	{
		index--;
		node = node->next;
	}
	if (node == '\0' && index != 0)
		return ('\0');
	return (node);
}
