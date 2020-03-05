#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - mesure the lenght of an array
 *@s: receive an array
 *
 *Return: i
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
/**
 *string_nconcat - concatenate s1 and s2 n times
 *@n: number
 *@s1: string
 *@s2: string
 *Return: pointer to a new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, y = 0, i = 0;
	char *p;

	if (s1 != '\0')
		l1 = _strlen(s1);
	if (s2 != '\0')
		l2 = _strlen(s2);
	if (n >= l2)
	{
		p = malloc(l1 + l2 + 1);
		if (p == '\0')
			return ('\0');
		n = l2;
	}
	else
	{
		p = malloc(l1 + n + 1);
		if (p == '\0')
			return ('\0');
	}
	if (l1 != '\0')
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
	if (l2 != '\0')
		for (y = 0; y < n; y++)
		{
			p[i] = s2[y];
			i++;
		}
	p[i] = '\0';
	return (p);
}
