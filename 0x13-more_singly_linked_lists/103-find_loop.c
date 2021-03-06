#include "lists.h"
/**
 *find_listint_loop - find a circular linked list
 *@head: linked list
 *Return: linked list loop ini
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node;

	if (head == '\0')
		return ('\0');
	node = head;
	while (node != '\0')
	{
		if (node - node->next <= 0)
			return (node->next);
		node = node->next;
	}
	return ('\0');
}
