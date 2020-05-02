#include "lists.h"
/**
 *dlistint_len - find the lenght of a linked list
 *@h: linked list
 *Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t i = 0;

	node = h;
	while (node != '\0')
	{
		node = node->next;
		i++;
	}
	return (i);

}
