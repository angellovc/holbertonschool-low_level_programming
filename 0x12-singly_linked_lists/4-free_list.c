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
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
