#include "lists.h"

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
