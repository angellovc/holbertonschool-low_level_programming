#include "holberton.h"
/**
 *print_number - print numbers in putchar
 *@n: receive a number
 *
 */
void print_number(int n)
{
	int number, last_number;

	number = n;
	while (number != 0)
	{
		last_number = number % 10;
		number = number / 10;
		_putchar('0' + last_number);
	}
}
