#include "holberton.h"
/**
 *print_triangle - size
 *@size: receive a number
 *
 */
void print_triangle(int size)
{
	int i, j, y;

	if (size < 1)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
			_putchar(' ');
		for (y = 1; y <= i; y++)
			_putchar('#');
		_putchar('\n');
	}
}
