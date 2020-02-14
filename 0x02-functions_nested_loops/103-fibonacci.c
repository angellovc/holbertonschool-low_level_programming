#include <stdio.h>
/**
 *main - entry point
 *
 *Return: nothing
 */
int main(void)
{
	long int number1 = 1, number2 = 2, temp = 0, even = 2;

	printf("%li, %li", number1, number2);
	while (temp <= 4000000)
	{
		temp = number1 + number2;
		number1 = number2;
		number2 = temp;
		if (temp % 2 == 0)
		{
			even = even + temp;
			printf(", %li", even);
		}
	}
	printf("\n");
	return (0);
}
