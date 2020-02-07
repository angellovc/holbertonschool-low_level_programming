#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cent, decent, unid, comma = 44, space = 32;

	for (cent = 48; cent <= 55; cent++)
	{
		for (decent = 49; decent <= 56; decent++)
		{
			for (unid = 50; unid <= 57; unid++)
			{
				if ((cent < decent && decent < unid) &&
				    (cent != decent || decent != unid || unid != cent))
					{
				putchar(cent);
				putchar(decent);
				putchar(unid);
				if (cent == 55 && decent == 56 && unid == 57)
					break;
				putchar(comma);
				putchar(space);

					}
			}
		}
	}
	putchar('\n');
	return (0);
}
