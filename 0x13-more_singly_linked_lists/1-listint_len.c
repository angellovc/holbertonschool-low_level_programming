#include "lists.h"
/**
 *listint_len - find the length of a linked list
 *@h: linked list
 *Return: size of a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != '\0')
	{
		h = h->next;
		size++;
	}
	return (size);
}
