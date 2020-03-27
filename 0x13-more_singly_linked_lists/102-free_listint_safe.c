#include "lists.h"
/**
 *free_listint_safe - free in a safe way
 *@h: linked list
 *Return: size of released nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t size = 0;

	if (h == '\0' || (*h) == '\0')
		return (0);
	while ((*h) != '\0')
	{
		if ((*h) - (*h)->next <= 0)
		{
			free((*h));
			size++;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		(*h) = tmp;
		size++;
	}
	*h = '\0';
	return (size);
}
