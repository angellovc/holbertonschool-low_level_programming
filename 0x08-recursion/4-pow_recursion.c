#include "holberton.h"
/**
 *_pow_recursion - this is a pow function
 *@x: number
 *@y: power
 *Return: power raised of x
 */
int _pow_recursion(int x, int y)
{
	int ressult = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	ressult = x * _pow_recursion(x, y - 1);
	return (ressult);
}
