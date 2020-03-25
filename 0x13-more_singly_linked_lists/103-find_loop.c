#include "lists.h"
/**
 *find_listint_loop - find a circular linked list
 *@head: linked list
 *Return: linked list loop ini
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *bunny;

	bunny = head;
	turtle = head;
	while (turtle && bunny && bunny->next)
	{
		turtle = turtle->next;
		bunny = bunny->next->next;
		if (turtle == bunny)
			return (turtle);
	}
	return ('\0');
}
