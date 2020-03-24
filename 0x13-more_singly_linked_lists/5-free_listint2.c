#include "lists.h"
/**
 *free_listint2 - release a linked list using double pointer
 *@head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == '\0' || (*head) == '\0')
		return;
	while ((*head) != '\0')
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	free(*head);
}
