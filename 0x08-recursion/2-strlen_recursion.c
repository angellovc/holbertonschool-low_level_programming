#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - find the array lenght using recursion
 *@s: array addres
 *Return: number of character
 */
int _strlen_recursion(char *s)
{
	int n = 1;
	if (*s == '\0')
		return (0);
	if (*(s + 1) == '\0')
		return (n);
	n = 1 +	_strlen_recursion(s + 1);
	return (n);
}
