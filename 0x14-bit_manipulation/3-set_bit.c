#include "holberton.h"
/**
 *set_bit - set an specific bit position into 1
 *@index: bit position
 *@n: number
 *Return: number modified
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = i << index;
	*n = *n | i;
	return (1);
}
