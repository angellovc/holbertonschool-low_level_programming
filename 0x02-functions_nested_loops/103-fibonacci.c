#include <stdio.h>
/**
 *main - entry point
 *
 *Return: nothing
 */
int main(void)
{
	long int number1 = 1, number2 = 2, temp = 0;

	printf("%li, %li", number1, number2);
	while (temp < 4000000)
	{
		temp = number1 + number2;
		if (temp % 2 == 0)
	   		printf(", %li", temp);
		number1 = number2;
		number2 = temp;
	}
	printf("\n");
	return (0);
}
