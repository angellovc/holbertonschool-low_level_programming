#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head->next != '\0')
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
