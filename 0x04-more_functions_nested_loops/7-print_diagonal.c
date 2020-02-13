#include "holberton.h"
/**
 *print_diagonal - lines, spaces and "\"
 *@n: receive and int
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
