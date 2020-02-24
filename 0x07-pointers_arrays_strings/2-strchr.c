#include "holberton.h"
/**
 *_strchr - this is a strchr function
 *@s: string
 *@c: character
 *Return: array addres where an ocurrence have a place
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	do {
		if (s[i] == c)
			return ((s + i));
		i++;
	} while (s[i]);
	return (s);
}
