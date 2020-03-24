#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == '\0')
		return ('\0');
	else
	{
		new->n = 0;
		new->next = '\0';
	}
	new->n = n;
	*head = new;
	new->next = tmp;
	return (new);
}
