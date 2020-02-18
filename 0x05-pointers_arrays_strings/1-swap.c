#include "holberton.h"
/**
 *swap_int - swap two values
 *@a: receive an int
 *@b: receive an int
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
