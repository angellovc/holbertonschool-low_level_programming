#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int i = 0, random, sum;

	srand(time(NULL));

	while (sum != 2772)
	{

		if (sum > 2772)
		{
			sum = 0;
			i = 0;
		}
		if (i == 0)
			random = rand() % 127 + 1;
		sum = sum + random;
		i++;
	}
	i--;
	while (i >= 0)
	{
		printf("%c", random);
		i--;
	}
	return (0);
}
