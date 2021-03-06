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
	listint_t *new, *node, *counter;
	unsigned int nth = 1, i = 0;


	if (head == '\0')
		return ('\0');

	counter = (*head);
	while (counter != '\0')
	{
		counter = counter->next;
		i++;
	}
	if (idx > i)
		return ('\0');
	if (idx == 0)
	{
		new = new_listint(n);
		if (new == '\0')
			return ('\0');
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	node = (*head);
	while (nth < idx && node->next)
	{
		node = node->next;
		nth++;
	}
	new = new_listint(n);
	if (new == '\0')
		return ('\0');
	new->next = node->next;
	node->next = new;
	return (new);
}
