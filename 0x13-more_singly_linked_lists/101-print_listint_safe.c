#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	size_t size = 0;

	if (head == '\0')
		exit (98);
	tmp = head;
	while (head)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
		size++;
		if (head == tmp)
			break;
	}
	return (size);
}
