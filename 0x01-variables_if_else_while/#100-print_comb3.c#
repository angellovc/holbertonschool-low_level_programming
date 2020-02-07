#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, i, j, space = 32, comma = 44;

	n1 = 48;
	n2 = 49;
	i = 49;
	j = 0;
	while (n1 < 57)
	{
		putchar(n1);
		putchar(n2);
		if (n2 != 57 || n1 != 56)
		{
			putchar(comma);
			putchar(space);
		}
		if (n2 == 57)
		{
			n2 = i + j + 1;
			n1++;
			j++;
		}
		else
			n2++;
	}
	putchar('\n');
	return (0);
}
