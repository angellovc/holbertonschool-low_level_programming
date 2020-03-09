#include "holberton.h"
#include <stdio.h>
/**
 *_strlen - mesure the lenght of an array
 *@s: receive an array
 *
 *Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
char *zero(char *n, int lmin, int lmax)
{
	int i = 0;
	char s[lmax], *a = s;

	while (i < lmax)
	{
		if (i < lmin)
			a[i] = n[i];
		else
			a[i] = '0';
		i++;
	}
	s[i] = '\0';
	printf("%s\n", s);

	return (a);

}
char *sum(char *n1, char *n2, int l1, int l2)
{
	int i = 0, tmp = 0;
	char ressult[200], *r = ressult;

	while(n1[i] != '\0')
	{
		tmp = ((n1[i] - '0') + (n2[i] - '0'));
		printf("%i\n", tmp);
		r[i] = ('0' + tmp);
		i++;
	}
	r[i] = '\0';
	return (r);
}
int main(void)
{
	int i = 0, l1 = 0, l2 = 0;
	char *n1 = "111", *n2 = "2000", *ressult;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	if (l1 < l2)
		n1 = zero(n1, l1, l2);
	else if (l2 < l1)
		n2 = zero(n2, l2, l1);
	ressult = sum(n1, n2, l1, l2);
	printf("%s\n", ressult);
	return (0);
}
