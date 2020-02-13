#include "holberton.h"

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
		if (i == 4 || i == 2)
			i++;
	}
	_putchar('\n');
}
