#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first_node, *last_node, *delete;
	unsigned int nth = 0;

	if ((*head) == '\0')
		return (0);
	delete = (*head);
	if (index == 0)
	{
		(*head) = delete->next;
		free(delete);
		return (1);
	}
	while (nth != index)
	{
		if (delete == '\0' && nth != index)
			return (-1);
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
