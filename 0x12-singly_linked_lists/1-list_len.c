#include "lists.h"
#include <stdio.h>
/**
 *list_len - find the number of nodes into a linked list
 *@h: linked list
 *Return: size of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != '\0')
	{
		size++;
		h = h->next;
	}
	return (size);
}
