#include "holberton.h"
#include <stdio.h>
/**
 *print_last_digit - function
 *@x: receive a int
 *
 *Return: last digit in absolute
 */
int print_last_digit(int x)
{
	int ressult = 0;
	int r = 0;

	ressult = x % 10;
	if (ressult < 0)
	{
		ressult = -ressult;
		r = ressult;
	}
	else
		r = ressult;
	ressult = ressult + '0';
	_putchar(ressult);
	return (r);
}
