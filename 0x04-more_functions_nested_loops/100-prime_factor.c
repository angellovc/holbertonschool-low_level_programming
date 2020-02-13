#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0
 */
int main(void)
{
	long int y = 2, number = 612852475143;

	while (number != 1)
	{
		if (number % y == 0)
			number = number / y;
		else
			y++;
	}
	printf("%li\n", y);
	return (0);
}
