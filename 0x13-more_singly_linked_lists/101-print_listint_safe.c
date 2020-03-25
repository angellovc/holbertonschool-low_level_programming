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
	listint_t *node;
	size_t size = 0;

	if (head == '\0')
		return ('\0');
	node = (listint_t *)head;
	while (node != '\0')
	{
		printf("[%p] %i\n", (void *)node, node->n);
		if (node - node->next <= 0)
		{
			node = node->next;
			size++;
			printf("-> [%p] %i\n", (void *)node, node->n);
			break;
		}
		node = node->next;
		size++;
	}
	return (size);
}
