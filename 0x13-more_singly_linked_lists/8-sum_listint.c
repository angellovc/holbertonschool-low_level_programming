#include "lists.h"
/**
 *sum_listint - sum the element of a linked list
 *@head: linked list
 *Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != '\0')
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
