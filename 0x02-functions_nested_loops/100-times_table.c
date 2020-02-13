#include "holberton.h"
/**
 *print_times_table - multiply row for col
 *@n: receive the number of the table
 *
 *Return: nothing
 */
void print_times_table(int n)
{
	int row, col, ressult;

	for (row = 0; row <= n; row++)
	{
	if ((n > 15 || n < 0))
		break;
		for (col = 0; col <= n; col++)
		{
			ressult = row * col;
			if (ressult <= 9)
			{
				print_1_digit(ressult, row, col, n);
			}
			else
			{
				print_2_digit(ressult, row, col, n);
			}
		}
		_putchar('\n');
	}
}
/**
 *print_1_digit - print 1 digit numbers
 *@ressult: ressult of multiplication
 *@row: row
 *@col: columm
 *@n: numbers
 *
 *Return: nothing
 */
void print_1_digit(int ressult, int row, int col, int n)
{
	int next_number;

	_putchar('0' + ressult);
	if (!(col == n))
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	next_number = row * (col + 1);
	if (next_number <= 9)
		_putchar(32);
	}
}
/**
 *print_2_digit - print numbers > digits
 *@ressult: ressult of multiplication
 *@row: row
 *@col: columm
 *@n: numbers
 *
 *Return: nothing
 */
void print_2_digit(int ressult, int row, int col, int n)
{
	int i, number, last_number[3], next_number;

	i = 0;
	number = ressult;
	while (number != 0)
	{
		last_number[i] = number % 10;
		number = number / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar('0' + last_number[i]);
		i--;
	}
	next_number = row * (col + 1);
	if (!(col == n))
	{
		if (next_number >= 9 && next_number <= 99)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		else if (next_number >= 99)
		{
			_putchar(44);
			_putchar(32);
		}
	}
}
