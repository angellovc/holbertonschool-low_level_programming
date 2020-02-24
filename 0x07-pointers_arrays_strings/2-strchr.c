#include "holberton.h"
/**
 *_strchr - this is a strchr function
 *@s: string
 *@c: character
 *Return: array addres where an ocurrence have a place
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	*(s + i) = '\0';
	return ((s + i));
}
