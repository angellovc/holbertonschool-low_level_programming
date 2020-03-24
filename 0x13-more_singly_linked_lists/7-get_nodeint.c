#include "lists.h"
/**
 *get_nodeint_at_index - get the position of a node
 *@head: linked list
 *@index: linked list position
 *Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;
	listint_t *node;

	node = head;
	if (node == '\0')
		return ('\0');
	while (nth != index)
	{
		if (node == '\0' && nth != index)
			return ('\0');
		node = node->next;
		nth++;
	}
	return (node);
}
