#include "lists.h"
/**
 *add_nodeint - add node at the beginning of linked list
 *@head: linked lis
 *@n: element of linked list
 *Return: pointer to a new node
 */
list_alpha *add_letter_node(list_alpha **head, char letter)
{
	list_alpha *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(list_alpha));
	if (new == '\0')
		return ('\0');
	new->letter = '0';
	new->next = '\0';
	new->letter = letter;
	*head = new;
	new->next = tmp;
	return (new);
}
