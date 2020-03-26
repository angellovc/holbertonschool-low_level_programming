#include "holberton.h"
#include <stdio.h>
/**
 *get_bit - get the value of a specific bit into a binary number
 *@n: number
 *@index: specific bit position
 *Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp = n, i = 0;
	for (i = 0; tmp != 0; i++)
		tmp = tmp >> 1;
	if (i < index)
		return (-1);

	n = n >> index;
	return (n & 1);
}
