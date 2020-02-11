#include "holberton.h"
/**
 *print_sign - check the numbers
 *@n: receive any character
 *
 *Return: return a, b and c
 */
int print_sign(int n)
{
	int a = 1, b = 0, c = -1;

	if (n > 0)
	{
		_putchar('+');
		return (a);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (b);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (c);
	}
	return (0);
}
