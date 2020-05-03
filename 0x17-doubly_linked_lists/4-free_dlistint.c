#include "lists.h"
/**
 *free_dlistint - free a double linked list
 *@head: double linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != '\0')
		while (head != '\0')
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
}
