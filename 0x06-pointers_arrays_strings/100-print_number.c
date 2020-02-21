#include "holberton.h"
/**
 *print_number (int n)
 *@n: receive a number
 */
void print_number(int n)
{
	int reverse_n = 0, last_number;
	unsigned int i = 0;
	if (n < 0)
	{
		i = -n ;
		_putchar(45);
	}
	else if (n > 0)
		i = n;
	else if (n == 0)
		_putchar(48);
	while (i != 0)
	{
		last_number = i % 10;
		reverse_n = (reverse_n * 10) + last_number;
		i = i / 10;
	}
	while (reverse_n != 0)
	{
		last_number = reverse_n % 10;
		reverse_n = reverse_n / 10;
		_putchar('0' + last_number);
	}
}
