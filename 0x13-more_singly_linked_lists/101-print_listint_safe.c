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
	const listint_t *turtle, *bunny, *tmp;
	size_t size = 0, count = 0;

	if (head == '\0')
		exit(98);
	bunny = head;
	turtle = head;
	while (head != '\0')
	{
		size++;
		count++;
		turtle = turtle->next;
		if (bunny != '\0' && bunny->next->next != '\0')
			bunny = bunny->next->next;
		else
			bunny = '\0';
		if (!(tmp == turtle || tmp == bunny))
			printf("[%p] %i\n", (void *)head, head->n);
		if (tmp == turtle || tmp == bunny)
		{
			printf("-> [%p] %i\n", (void *)head, head->n);
			break;
		}
		if (turtle == bunny)
			tmp = bunny;
		head = head->next;
	}
	return (size);
}
