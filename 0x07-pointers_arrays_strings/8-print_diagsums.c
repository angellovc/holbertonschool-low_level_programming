#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - multidimensional array sum
 *@a: array
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
	forward_sum(a, size);
	backward_sum(a, size);
}
/**
 *backward_sum - multidimensional array sum
 *@a: array
 *@size: size of array
 */
void backward_sum(int *a, int size)
{
	int i = 0, y = 0, total = 0, ressult = 0;

	total = size * size - 1;
	size--;

	while (i < total)
	{
		if (i == total)
			break;
		if (y == size)
		{
			ressult = ressult + *(a + i);
			y = 0;
		}
		i++;
		y++;
	}
	printf("%i\n", ressult);
}
/**
 *forward_sum - multidimensional array sum
 *@a: array
 *@size: size of an array
 */
void forward_sum(int *a, int size)
{
	int i = 0, y = 0, total = 0, ressult = 0;

	total = size * size;
	while (i < total)
	{
		if (y > size)
		{
			ressult = ressult + *(a + i);
			y = 0;
		}
		else if (y == 0)
			ressult = ressult + *(a + i);

		y++;
		i++;
	}
	printf("%i, ", ressult);
}
