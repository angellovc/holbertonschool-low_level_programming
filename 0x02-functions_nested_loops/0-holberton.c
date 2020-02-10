#include "holberton.h"
/**
 *main - entry point
 *
 *Return: always is 0
 */
int main(void)
{
	int i;
	char word[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	i = 0;
	while (i < 9)
	{
		_putchar(word[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
