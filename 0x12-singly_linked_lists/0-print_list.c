#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != '\0')
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
