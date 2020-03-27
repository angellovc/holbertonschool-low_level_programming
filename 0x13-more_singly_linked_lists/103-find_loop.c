#include "lists.h"
/**
 *find_listint_loop - find a circular linked list
 *@head: linked list
 *Return: linked list loop ini
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t **node;
	size_t i = 0;

	node = &head;
	node[0] = head;
	while (node[0] != '\0')
	{
		if (node[0] - node[0]->next <= 0)
		{
			node[1] = node[0]->next;
			break;
		}
		node[0] = node[0]->next;
		i++;
	}
	node[0] = head;
	while (i != 0)
	{
		if (node[0]->next == '\0')
			return ('\0');
		node[0] = node[0]->next;
		i--;
	}
	return (node[0]);
}
