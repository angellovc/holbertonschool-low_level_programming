#include "lists.h"
/**
*new_listint - make a new listint struct
*@n: element of the new struct
*Return: pointer to a new struct
*/
listint_t *new_listint(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == '\0')
		return ('\0');
	new->n = 0;
	new->next = '\0';
	new->n = n;
	return (new);
}

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
	unsigned int nth = 0;

	if (head == '\0' )
		return ('\0');
	if ((*head) == '\0' && idx != 0)
		return ('\0');
	node = (*head);
	if (idx == 0)
	{
		new = new_listint(n);
		new->next = node;
		(*head) = new;
		return (*head);
	}
	while (nth < idx)
	{
		if (node == '\0' && nth != idx)
			return ('\0');
		tmp = node;
		node = node->next;
		nth++;
	}
	new = new_listint(n);
	new->next = node;
	tmp->next = new;
	return (new);
}
