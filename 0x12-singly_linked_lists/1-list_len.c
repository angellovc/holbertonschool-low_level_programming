#include "lists.h"
#include <stdio.h>

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
