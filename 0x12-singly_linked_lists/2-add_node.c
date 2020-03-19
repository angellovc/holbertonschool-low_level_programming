#include "lists.h"
#include <string.h>
/**
 *add_node - add a new node at begining of linked list
 *@str: string
 *@head: linked list
 *Return: pointer to a new linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int len = 0;

	while (str != '\0' && str[len] != '\0')
		len++;
	tmp = *head;
	new = malloc(sizeof(list_t));
	if (new == '\0')
		return ('\0');
	new->str = malloc(sizeof(len));
	if (new->str == '\0')
		return ('\0');
	if (str != '\0')
		new->str = strdup(str);
	else
		new->str = '\0';
	new->len = len;
	*head = new;
	new->next = tmp;
	return (new);
}
