#include "holberton.h"

int factorial(int n)
{
	int ressult = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (n);
	ressult = n * factorial(n - 1);
	return (ressult);
}
