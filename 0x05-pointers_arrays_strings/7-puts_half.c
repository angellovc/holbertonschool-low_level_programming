#include "holberton.h"
/**
 *puts_half - print half array
 *@str: receive an array
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i = i - 1;
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i - 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
