#include "holberton.h"
/**
 *print_alphabet_x10 - print the alphabet ten times
 *
 *Return: dont return anything
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
