#include "lists.h"
/**
 *delete_nodeint_at_index - delete a specific position
 *@head: linked list
 *@index: position
 *Return: 1 if operation is succes, -1 if dont
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first_node, *last_node, *delete, *count;
	unsigned int nth = 0, i = 0;

	if (head == '\0' || (*head) == '\0')
		return (-1);
	count = *head;
	while (count != '\0')
	{
		count = count->next;
		i++;
	}
	if (i < index)
		return (-1);
	delete = (*head);
	if (index == 0)
	{
		(*head) = delete->next;
		free(delete);
		return (1);
	}
	while (nth != index)
	{
		delete = delete->next;
		nth++;
		if (nth == (index - 1))
			first_node = delete;
	}
	last_node = delete->next;
	free(delete);
	first_node->next = last_node;
	return (1);
}
