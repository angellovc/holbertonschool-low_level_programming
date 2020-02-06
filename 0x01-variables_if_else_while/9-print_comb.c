#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, comma = 44, space = 32;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		putchar(comma);
		putchar(space);
		n++;
	}
	putchar('\n');
	return (0);
}
