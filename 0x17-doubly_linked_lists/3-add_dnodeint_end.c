#include "lists.h"
/**
 *add_dnodeint_end - add a node at the end of the double linked list
 *@head: double linked list
 *@n: new element
 *Return: pointer to a new linked linst
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
		return ('\0');
	new->n = n;
	new->next = '\0';
	new->prev = '\0';
	if (head[0] == '\0')
	{
		head[0] = new;
		return (new);
	}
	node = head[0];
	while (node->next != '\0')
		node = node->next;
	node->next = new;
	new->prev = node;
	return (new);
}
