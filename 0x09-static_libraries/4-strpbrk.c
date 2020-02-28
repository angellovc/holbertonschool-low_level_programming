#include "holberton.h"
/**
 *_strpbrk - this is a strpbrk function
 *@s: string
 *@accept: string
 *Return: array addres where an ocurrence dont have a place
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, y = 0;

	while (s[i])
	{
		y = 0;
		while (accept[y])
		{
			if (s[i] == accept[y])
				return (&s[i]);
			y++;
		}
		i++;
	}
	return ('\0');
}
