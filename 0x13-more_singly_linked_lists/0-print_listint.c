#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != '\0')
	{
		printf("%i\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
