#include "holberton.h"
/**
 *print_number - print an int using puchar
 *@n: receive a number
 */
void print_number(int n)
{
	unsigned int i = 0, next_number = 0, last_number = 0;

	if (n < 0)
	{
		i = -n;
		_putchar(45);
	}
	else if (n > 0)
		i = n;

	next_number = i / 10;
	if (next_number != 0)
		print_number(next_number);
	last_number = i % 10;
	_putchar('0' + last_number);
}
