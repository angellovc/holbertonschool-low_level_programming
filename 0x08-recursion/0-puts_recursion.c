#include "holberton.h"
/**
 *_puts_recursion - print array using recursion
 *@s: position 0 of a string
 */
void _puts_recursion(char *s)
{
	if (*s)
		_putchar(*s);
	if (*(s + 1) != '\0')
	{
		_puts_recursion((s + 1));
	}
	else
		_putchar('\n');
}
