#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	int character[10];

	character[0] = number[0] + '0';
	character[1] = number[1] + '0';
	character[2] = number[2] + '0';
	character[3] = number[3] + '0';
	character[4] = number[4] + '0';
	character[5] = number[5] + '0';
	character[6] = number[6] + '0';
	character[7] = number[7] + '0';
	character[8] = number[8] + '0';
	character[9] = number[9] + '0';
	while (i <= 10)
	{
		putchar(character[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
