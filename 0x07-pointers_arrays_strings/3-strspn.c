#include "holberton.h"
/**
 *_strspn - strspn function
 *@s: string compared
 *@accept: string comparer
 *Return: the number of matches in the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, y = 0;
	unsigned int match = 1, count = 0;

	for (i = 0; match; i++)
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] != s[i])
				match = 0;
			else
			{
				count++;
				match = 1;
				break;
			}
		}
	return (count);
}
