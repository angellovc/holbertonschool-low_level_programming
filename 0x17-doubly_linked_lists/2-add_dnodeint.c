#include "lists.h"
/**
 *add_dnodeint - add a node at the begining of the linked list
 *@head: linked list
 *@n: new element
 *Return: pointer to a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head[0] == '\0')
	{
		new = malloc(sizeof(dlistint_t));
		if (new == '\0')
			return ('\0');
		new->n = n;
		new->next = '\0';
		new->prev = '\0';
		head[0] = new;
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
		return ('\0');
	head[0]->prev = new;
	new->n = n;
	new->next = head[0];
	new->prev = '\0';
	head[0] = new;
	return (new);
}
