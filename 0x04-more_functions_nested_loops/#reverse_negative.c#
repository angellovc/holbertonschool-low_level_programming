#include "holberton.h"
/**
 *reverse_negative - reverse negative numbers
 *@n: receive a number
 *
 */
void reverse_negative(int n)
{
	int reverse_n = 0, last_number, i;

	i = -n ;
	while (i != 0)
	{
		last_number = i % 10;
		reverse_n = (reverse_n * 10) + last_number;
		i = i / 10;
	}
	_putchar(45);
	while (reverse_n != 0)
	{
		last_number = reverse_n % 10;
		reverse_n = reverse_n / 10;
		_putchar('0' + last_number);
	}
}
