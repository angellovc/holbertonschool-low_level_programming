#include "holberton.h"
/**
 *rev_string - reverse an array
 *@s: receive a pointer
 *
 */
void rev_string(char *s)
{
	int i = 0, y = 0, tmp, nm;

	while (s[i] != '\0')
		i++;
	i = i - 1;
	nm = i / 2;
 	for (; i != nm; i--)
	{
		tmp = s[i];
		s[i] = s[y];
		s[y] = tmp;
		y++;
	}
}
