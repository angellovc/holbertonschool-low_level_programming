#include "holberton.h"

int wildcmp(char *s1, char *s2)
{
	int i = 0;
	if (s2[0] == '*' && s2[1] == '*')
		i = wildcmp(s1, (s2 + 1));
	if (s2[0] == '*' && s2[1] != s1[0])
		i = wildcmp((s1 + 1), s2);
	if ((s1[0] == s2[0]) && (s1[0] != '\0'))
		i = wildcmp((s1 + 1), (s2 + 1));
	if (s2[0] == '*' && s2[1] == s1[0])
		i = wildcmp((s1 + 1), (s2 + 1));
	if (s1 == '\0' && s2 == '\0')
	{
		i = 1;
		return (i);
	}
	if (s1 == '\0' || s2 == '\0')
	{
		i = 1;
		return (i);
	}
	return (i);
}
