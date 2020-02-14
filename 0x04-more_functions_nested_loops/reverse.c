#include "holberton.h"

void reverse(int n)
{
	int reverse_n = 0, last_number;

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
