#include "lists.h"
#include <string.h>
/**
 *add_node_end - add node at the end of a linked list
 *@head: linked list
 *@str: str
 *Return: new linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *last, *new;

	last = (*head);
	while (str != '\0' && str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (new == '\0')
		return ('\0');
	new->str = malloc(sizeof(len));
	if (new->str == '\0')
	{
		free(new);
		return ('\0');
	}
	if (str != '\0')
	{
		new->str = strdup(str);
		new->len = len;
	}
	else
		new->str = '\0';

	if (last != '\0')
	{
		while (last->next != '\0')
			last = last->next;
		last->next = new;
	}
	else
		(*head) = new;
	return (new);
}
