#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;

	lowercase = 'a';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
		if (lowercase == 'e')
			lowercase++;
		if (lowercase == 'q')
			lowercase++;
	}
	putchar('\n');
	return (0);
}
