#include "holberton.h"
/**
 *print_rev - reverse an array
 *@s: receive and array
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	i = i - 1;
	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
