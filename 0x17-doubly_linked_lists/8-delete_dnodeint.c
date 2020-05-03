#include "lists.h"
/**
 *delete_dnodeint_at_index - delete a node into idx position
 *@head: linked list
 *@index: position
 *Return: 1 in success, -1 in failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp;

	if (head[0] == '\0')
		return (-1);
	if (index == 0 && head[0]->next == '\0')
	{
		free(head[0]);
		head[0] = '\0';
		return (1);
	}
	if (index == 0)
	{
		tmp = head[0];
		head[0] = head[0]->next;
		head[0]->prev = '\0';
		free(tmp);
		return (1);
	}
	node = head[0];
	while (node->next && index)
		node = node->next, index--;
	if (node->next == '\0' && index > 0)
		return (-1);
	tmp = node->prev;
	if (node->next != '\0')
		tmp->next = node->next, node->next->prev = tmp;
	else
		tmp->next = '\0';
	free(node);
	return (1);
}
