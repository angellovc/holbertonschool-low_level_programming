#include "lists.h"
/**
 *delete_nodeint_at_index - delete a specific position
 *@head: linked list
 *@index: position
 *Return: 1 if operation is succes, -1 if dont
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node, *last;
	unsigned int nth = 1;

	if (head == '\0' || (*head) == '\0')
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
		return (1);
	}
	tmp = (*head);
	while (nth <= index)
	{
		if (tmp == '\0' && index > nth)
			return (-1);
		tmp = tmp->next;
		if (nth < index)
			node = tmp;
		nth++;
	}
	if (tmp != '\0' && tmp->next != '\0')
		last = tmp->next;
	else
		last = '\0';
	free(tmp);
	node->next  = last;
	return (1);
}
