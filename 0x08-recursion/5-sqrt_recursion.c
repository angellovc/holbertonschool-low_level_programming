#include "holberton.h"
#include <stdio.h>
/**
 *_sqrt_recursion - find a perfect square root
 *@n: number
 *Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int ressult = 0, i = 1;

	ressult = comp(n, i);
		return (ressult);
}
/**
 *comp - find the square root
 *@n: base number
 *@i: iterator
 *Return: square root
 */
int comp(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	if (i * i < n)
		i++;
	i = comp(n, i);
	return (i);
}
