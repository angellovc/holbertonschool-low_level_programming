#include "holberton.h"
/**
 **_memset - change the value of *s
 *@s: receive an array direction
 *@b: receive an char
 *@n: position of the array
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
