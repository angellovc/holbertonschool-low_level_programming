#include "holberton.h"
/**
 *times_table - do multiplications
 *
 *Return: don't return any value
 */
void times_table(void)
{
	int value, multiples, ressult = 0, comma = 44, space = 32;
	int  last_digit, next_digit;
	int r_condition;

	for (value = 0; value <= 9; value++)
	{
		for (multiples = 0; multiples <= 9; multiples++)
		{
			ressult = value * multiples;
			if (ressult > 9)
			{
				last_digit = ressult % 10;
				next_digit = ressult / 10;
				_putchar('0' + next_digit);
				_putchar('0' + last_digit);
				if (multiples == 9)
					break;
				_putchar(comma);
				_putchar(space);

			}
			else
			{
				_putchar('0' + ressult);
				if (multiples == 9)
					break;
				_putchar(comma);
				_putchar(space);
				r_condition = value * (multiples + 1);
				if (!(r_condition > 9))
					_putchar(space);
			}
		}
		_putchar('\n');

	}
}
