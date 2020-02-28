#include "holberton.h"
/**
 *_isalpha - check the letters
 *@c: receive
 *
 *Return: 1 if upper or lower case, 0 other
 */
int _isalpha(int c)
{
	int a = 1, b = 0;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (a);
	else
		return (b);
}
