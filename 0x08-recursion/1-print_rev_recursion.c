#include "holberton.h"
/**
 *_print_rev_recursion - print an string in reverse
 *@s: position 0 in the string
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_print_rev_recursion((s + 1));
	}
	if (*s)
		_putchar(*s);
}
