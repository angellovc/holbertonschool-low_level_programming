#include "holberton.h"
/**
 * jack_bauer - clock function
 *
 *Return: don't return anything
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2, space = 32, colon = 58;

	for (h1 = 48; h1 <= 50; h1++)
	{
		for (h2 = 48; h2 <= 51; h2++)
		{
			for (m1 = 48; m1 <= 53; m1++)
			{
				for (m2 = 48; m2 <= 57; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(colon);
					_putchar(m1);
					_putchar(m2);
					_putchar(space);
					_putchar('\n');
				}
			}
		}
	}
}
