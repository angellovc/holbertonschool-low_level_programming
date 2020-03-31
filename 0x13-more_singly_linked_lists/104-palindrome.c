#include "lists.h"

list_alpha palindrome(list_alpha *head, list_alpha *tail)
{
	if (tail->next != '\0')
		head = palindrome(tail->next);
	else
		return (head->next);
	if (head == '\0')
		return ('\0');
	if (head->letter != tail->letter)
		return ('\0');
	else
		return (head->next);
	return (head);
}

int find_palindrome(list_alpha *head)
{
	if (palindrome(head, head) == '\0')
		return (0);
	else
		return (1);
}
