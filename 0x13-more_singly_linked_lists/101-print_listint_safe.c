#include "lists.h"
#include <stdio.h>
#include "lists.h"
/**
 *print_listint_safe - print int avoiding a loop
 *@head: linked list
 *Return: size of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *turtle, *bunny, *tmp;
	size_t size = 0;

	if (head == '\0')
		exit(98);
	bunny = (listint_t *)head;
	turtle = (listint_t *)head;
	tmp = '\0';
	while (head != '\0')
	{
		turtle = turtle->next;
		if (bunny != '\0' && bunny->next->next != '\0')
			bunny = bunny->next->next;
		else
			bunny = '\0';
		if (!((tmp != '\0') && (tmp == turtle || tmp == bunny)))
			printf("[%p] %i\n", (void *)head, head->n);
		if ((tmp != '\0') && (tmp == turtle || tmp == bunny))
		{
			printf("-> [%p] %i\n", (void *)head, head->n);
			break;
		}
		if (turtle == bunny && size != 0)
			tmp = turtle;
		head = head->next;
		size++;
	}
	return (size);
}
