#include "holberton.h"
/**
 *_isdigit - check if c is digit
 *@c: receive an int
 *
 *Return: 1 if is digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
