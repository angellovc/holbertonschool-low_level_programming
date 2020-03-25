#include "lists.h"
#include <stdio.h>
#include "lists.h"
/**
 *find_loop - find a loop into a linked list
 *@head: linked list
 *Return: loop position
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *turtle, *bunny;

	bunny = head;
	turtle = head;
	while (turtle && bunny && bunny->next)
	{
		turtle = turtle->next;
		bunny = bunny->next->next;
		if (turtle == bunny)
			return (bunny->next);
	}
	return ('\0');
}
/**
 *print_listint_safe - print int avoiding a loop
 *@head: linked list
 *Return: size of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *node, *tmp;
	size_t size = 0, step = 1, limit = 2;

	if (head == '\0')
		exit (98);

	node = (listint_t *)head;
	tmp = find_loop(node);
	while (node != '\0')
	{
		if (step != limit)
			printf("[%p] %i\n", (void *)node, node->n);
		if (step == limit)
		{
			printf("-> [%p] %i\n", (void *)node, node->n);
			break;
		}
		if (node == tmp)
			step++;
		node = node->next;
		size++;
	}
	return (size);
}
