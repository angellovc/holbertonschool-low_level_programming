#include "holberton.h"

void _print_rev_recursion(char *s)
{
	char *p;

	p = &s[1];
	if (*p != '\0')
	{
		_print_rev_recursion(p);
	}
	_putchar(*s);
}
