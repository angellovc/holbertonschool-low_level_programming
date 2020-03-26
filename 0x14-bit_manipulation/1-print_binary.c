#include "holberton.h"
/**
 *make_bin - make a binary number from a decimal number
 *@n: decimal number
 *@tmp: decimal number temp
 */
void make_bin(unsigned long int n, unsigned long int tmp)
{
	tmp = n;
	n = n >> 1;
	if (n != 0)
		make_bin(n, tmp);
	if ((n * 2) == tmp)
		_putchar('0');
	else
		_putchar('1');
}
/**
 *print_binary - conver a decimal number into a binary
 *@n: decimal number
 */
void print_binary(unsigned long int n)
{
	make_bin(n, 0);
}
