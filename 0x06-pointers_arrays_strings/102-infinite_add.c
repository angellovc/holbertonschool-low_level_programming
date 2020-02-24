#include "holberton.h"
#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, *pi = &i, y = 0, *py = &y, carry = 0;
	char *big, *small;

	big = biggest(n1, n2, pi);
	small = smallest(n1, n2, py);
	printf("%i\n", i);
	printf("%i\n", y);
	while (i >= 0)
	{
		if (y < 0)
			r[i] = big[i];
		else
			r[i] = '0' + ((big[i] - '0') + (small[y] - '0'));
		printf("%c", r[i]);
		i--;
		y--;

	}
	printf("%i\n", y);
}

char *biggest(char *n1, char *n2, int *pi)
{
	int y = 0, i = 0;

	while (n1[i])
		i++;
	while (n2[y])
		y++;
	i--;
	y--;
	if (i > y)
	{
		*pi = i;
		return (n1);
	}
	else
	{
		*pi = y;
		return (n2);
	}

}
char *smallest(char *n1, char *n2, int *py)
{
	int i = 0, y = 0;

	while (n1[i])
		i++;
	while (n2[y])
		y++;
	i--;
	y--;
	if (i < y)
	{
		*py = i;
		return (n1);
	}
	else
	{
		*py = y;
		return (n2);
	}

}
