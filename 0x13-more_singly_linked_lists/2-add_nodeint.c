#include "lists.h"
/**
 *add_nodeint - add node at the beginning of linked list
 *@head: linked lis
 *@n: element of linked list
 *Return: pointer to a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == '\0')
		return ('\0');
	new->n = 0;
	new->next = '\0';
	new->n = n;
	*head = new;
	new->next = tmp;
	return (new);
}
