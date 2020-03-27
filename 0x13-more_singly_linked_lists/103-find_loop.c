#include "lists.h"
/**
 *find_listint_loop - find a circular linked list
 *@head: linked list
 *Return: linked list loop ini
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *bunny;

	if (head == '\0')
		return ('\0');
	bunny = head;
	turtle = head;
	while (bunny && bunny->next && turtle)
	{
		turtle = turtle->next;
		bunny = bunny->next->next;
		if (turtle == bunny)
			break;
		if (bunny->next || turtle->next)
			return ('\0');
	}

	turtle = head;
	while (turtle != '\0')
	{
		if (turtle - turtle->next <= 0)
			return (turtle->next);
		turtle = turtle->next;
	}
	return ('\0');
}
