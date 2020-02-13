#include "holberton.h"
/**
 *more_numbers - print 0 to 14 teen times
 *
 *Return: nothing
 */
void more_numbers(void)
{
	int i = 0, n;

	while (i <= 10)
	{
		for (n = 0; n <= 14; n++)
			_putchar('0' + n);
		i++;
	}
	_putchar('\n');
}
