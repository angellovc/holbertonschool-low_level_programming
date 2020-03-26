#include "holberton.h"
/**
 *clear_bit - change bit position value to 0
 *@n: number
 *@index: bit position
 *Return: 1 if its works
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i = i << index;
	i = ~i;
	*n = *n & i;
	return (1);
}
