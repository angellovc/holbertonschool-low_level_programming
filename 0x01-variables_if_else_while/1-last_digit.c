#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
if (last_n > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, last_n);
else if (last_n == 0)
	printf("Last digit of %i is %i and is 0\n", n, last_n);
else if (last_n < 6)
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_n);
return (0);
}
