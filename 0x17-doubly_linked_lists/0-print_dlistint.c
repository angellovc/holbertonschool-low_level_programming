#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - print double linked list
 *@h: linked list
 *Return: element number of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t i = 0;

	node = h;
	while (node != '\0')
	{
		printf("%i\n", node->n);
		node = node->next;
		i++;
	}
	return (i);
}
