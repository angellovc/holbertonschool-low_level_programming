#include "lists.h"
/**
 *add_nodeint_end - add node at the end of the linked list
 *@head: linked list
 *@n: linked list element
 *Return: pointer to a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	last = (*head);
	new = malloc(sizeof(listint_t));
	if (!new)
		return ('\0');
	new->n = 0;
	new->next = '\0';
	new->n = n;
	if (last != '\0')
	{
		while (last->next != '\0')
			last = last->next;
		last->next = new;
	}
	else
		(*head) = new;
	return (new);
}
