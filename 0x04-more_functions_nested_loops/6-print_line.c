#include "holberton.h"
/**
 *print_line - print line
 *@n: receive a number
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
