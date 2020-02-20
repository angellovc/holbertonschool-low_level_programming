#include "holberton.h"
#include <stdio.h>
/**
 *reverse_array - reverse an array
 *@a: array
 *@n: array size
 *
 */
void reverse_array(int *a, int n)
{

	int y = 0, tmp = 0;

	n--;
	for (; n > y ; n--)
	{
		tmp = *(a + n);
		*(a + n) = *(a + y);
		*(a + y) = tmp;
		y++;
	}
}
