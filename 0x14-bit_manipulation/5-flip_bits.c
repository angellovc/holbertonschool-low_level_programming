#include "holberton.h"
/**
 *flip_bits - find the number of bits you need to flip n to m
 *@n: number
 *@m: number
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, x = 0, y = 0;
	unsigned int bit = 0;

	for (i = (sizeof(unsigned long int) * 8); i != 0; i--)
	{
		x = (n >> i) & 1;
		y = (m >> i) & 1;
		if (x != y)
			bit++;
	}
	return (bit);
}
