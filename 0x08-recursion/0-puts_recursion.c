#include "holberton.h"

void _puts_recursion(char *s)
{
	char *p;

	_putchar(s[0]);
	p = (s + 1);
	if (*p != '\0')
		_puts_recursion(p);
	else
		_putchar('\n');
}
