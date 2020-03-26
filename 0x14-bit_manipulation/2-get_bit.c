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

	n = n >> index;
	return (n & 1);
}
