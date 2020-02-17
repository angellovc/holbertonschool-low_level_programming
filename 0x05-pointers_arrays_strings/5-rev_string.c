#include "holberton.h"

void rev_string(char *s)
{
	int i = 0, y = 0, tmp;
	while (s[i] != '\0')
		i++;
	i = i - 1;
	for (; i != 0; --i)
	{
		tmp = s[i];
		s[i] = s[y];
		s[y] = tmp;
		y++;
	}
}
