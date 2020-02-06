#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, space = 32, comma = 44;

	n1 = 48;
	while (n1 <= 57)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			if ((n1 && n2 != 57) || (n2 && n1 != 0))
			{
				putchar (space);
				putchar(comma);
			}
			putchar(n1);
			putchar(n2);
		}
		n1++;
		if (n2 == 57)
			n2 = 48;
	}

	putchar('\n');
	return (0);
}
