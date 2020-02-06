#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	b = 48;
	while (b <= 57)
	{
		putchar(b);
		b++;
	}
	b = 'a';
	while (b <= 'e')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);

}
