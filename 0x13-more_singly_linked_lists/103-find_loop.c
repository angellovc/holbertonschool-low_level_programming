#include "lists.h"
/**
 *find_listint_loop - find a circular linked list
 *@head: linked list
 *Return: linked list loop ini
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node, *tmp;

	tmp = head;
	node = head;
	while (node->next != '\0')
	{
		tmp = node;
		node = node->next;
		if (tmp - node->next == 0)
			return (node->next);
	}
	return ('\0');
}
