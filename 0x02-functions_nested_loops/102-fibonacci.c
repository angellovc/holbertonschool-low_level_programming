#include <stdio.h>
/**
 *main - entry point
 *
 *Return: nothing
 */
int main(void)
{
	long int number1 = 1, number2 = 2, temp;
	int i;

	printf("%li, %li, ", number1, number2);
	for (i = 1; i <= 48; i++)
	{
		temp = number1 + number2;
		if (i >= 48)
			printf("%li\n", temp);
		else
			printf("%li, ", temp);
		number1 = number2;
		number2 = temp;
	}
	return (0);
}
