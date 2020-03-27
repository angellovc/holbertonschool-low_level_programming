#include "lists.h"
/**
 *find_listint_loop - find a circular linked list
 *@head: linked list
 *Return: linked list loop ini
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bunny, *turtle;

	if (head == '\0')
		return ('\0');
	bunny = head;
	turtle = head;
	while (bunny != '\0' && turtle != '\0')
	{
		turtle = turtle->next;
		bunny = bunny->next->next;
		if (bunny == turtle)
			return ('\0');
	}
	if (bunny == '\0' || bunny->next == '\0')
		return ('\0');
	turtle = head;
	while (turtle != '\0')
	{
		if (turtle - turtle->next <= 0)
			return (turtle->next);
		turtle = turtle->next;
	}
	return ('\0');
}
