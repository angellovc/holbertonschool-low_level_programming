#include "holberton.h"
/**
 *print_number - print
 *@n: receive a number
 *
 */
void print_number(int n)
{
	if (n > 0)
		reverse(n);
	else if (n == 0)
		_putchar(n + '0');
	else (n < 0)
	     {
		_putchar(45);
		reverse(n);
	     }
}
/**
 *reverse - reverse numbers
 *@n: receive a number
 *
 */
void reverse(int n)
{
	int reverse_n = 0, last_number;

	if (n < 0)
		n = -n;
	while (n != 0)
	{
		last_number = n % 10;
		reverse_n = (reverse_n * 10) + last_number;
		n = n / 10;
	}
	while (reverse_n != 0)
	{
		last_number = reverse_n % 10;
		reverse_n = reverse_n / 10;
		_putchar('0' + last_number);
	}
}
