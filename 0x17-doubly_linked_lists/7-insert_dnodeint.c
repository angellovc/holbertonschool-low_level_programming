#include "lists.h"
/**
 *make_dlistint_t - make new dlistint node
 *@n: dlistint_t element
 *Return: pointer to a new node
 */
dlistint_t *make_dlistint_t(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == '\0')
		return ('\0');
	new->next = '\0';
	new->prev = '\0';
	new->n = n;
	return (new);
}
/**
 *insert_dnodeint_at_index - insert a new node into idx position
 *@h: linked list
 *@idx: position
 *@n: new node element
 *Return: pointer to a position of a new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node;
	unsigned int nth = 1, i = 0;


	node = h[0];
	while (node != '\0')
		node = node->next, i++;
	if (idx > i)
		return ('\0');
	new = make_dlistint_t(n);
	if (new == '\0')
		return ('\0');
	if (idx == 0)
	{
		new->next = h[0];
		if (h[0])
			h[0]->prev = new;
		h[0] = new;
		return (new);
	}
	node = h[0];
	while (nth < idx && node->next)
	{
		node = node->next;
		nth++;
	}
	new->next = node->next;
	new->prev = node;
	if (node->next != '\0')
		node->next->prev = new;
	else
	node->next = new;
	return (new);
}
