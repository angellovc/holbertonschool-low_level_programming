#include "holberton.h"
/**
 *_pow - raise a number to the second power
 *@base: base number
 *Return: ressult
 */
unsigned int _pow(unsigned int base)
{
	unsigned int y = 1, result = 1;

	if (base == 0)
		return (1);
	while (y <= base)
	{
		result = result * 2;
		y++;
	}
	return (result);
}
/**
 *binary_to_uint - conver bin number to unsigned int
 *@b: binary number
 *Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0, y = 0;

	if (b == '\0')
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		if (b[i + 1] == '\0')
			break;
	for (; i >= 0; i--, y++)
	{
		if (b[i] != '0')
			if (b[i] != '1')
				return (0);
		if (b[i] == '1')
			number = number + _pow(y);
	}
	return (number);
}
