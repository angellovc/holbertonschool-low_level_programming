#include "holberton.h"
/**
 *more_numbers - print 0 to 14 teen times
 *
 *Return: nothing
 */
void more_numbers(void)
{
	int i = 0, n, last_digit, next_digit;

	while (i <= 10)
	{
		for (n = 0; n <= 14; ++n)
			{
				last_digit = n % 10;
				next_digit = n / 10;
				if (n > 9)
					_putchar('0' + next_digit);
				_putchar('0' + last_digit);
			}
		i++;
		_putchar('\n');
	}
}
