#include "lists.h"
/**
 *insert_nodeint_at_index - insert node into a specific position
 *@head: linked list
 *@idx: position
 *@n: element of the new node
 *Return: pointer to a new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *node;
	unsigned int nth = 1;


	node = (*head);
	while (nth < idx)
	{
		if (node == '\0' && nth != idx)
			return ('\0');
		node = node->next;
		nth++;
	}
	tmp = node->next;
	new = malloc(sizeof(listint_t));
	if (new == '\0')
		return ('\0');
	new->n = 0;
	new->next = '\0';
	new->n = n;
	new->next = tmp;
	node->next = new;
	return (new);
}
