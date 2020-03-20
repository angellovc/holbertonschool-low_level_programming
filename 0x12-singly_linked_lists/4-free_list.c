#include "lists.h"
#include <stdio.h>
/**
 *free_list - release a linked list
 *@head: linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		if (head->str != '\0')
			free(head->str);
		if (head->next != '\0')
			tmp = head;
		else
			free(head);
			head = head->next;
		free(tmp);
	}
}
