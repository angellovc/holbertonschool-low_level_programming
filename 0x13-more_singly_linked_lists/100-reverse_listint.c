#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = '\0', *forward;

	head[1] = head[0];
	while (head[1] != '\0')
	{
		forward = head[1]->next;
		head[1]->next = back;
		back = head[1];
		head[1] = forward;
	}
	head[0] = back;
	return (head[0]);
}
