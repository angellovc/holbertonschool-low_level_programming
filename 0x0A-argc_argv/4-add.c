#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int y;

	y = letters_digits(argc, argv);
	printf("%i\n", y);
	return (0);
}

int letters_digits(char argc, char **s)
{
	int i, y, flag = 0;
	for (i = 0; i < argc; i++)
		for (y = 0; (s[i][y] =! '\0'); y++)
		{
			if (s[i][y] < 48 || s[i][y] > 57)
				break;
			else if (s[i][y + 1] == '\0')
				flag = 1;
		}
	if (flag == 1)
		return (1);
	for (i = 0; i < argc; i++)
		for (y = 0; s[i][y] != '\0'; i++)
		{
			if (s[i][y + 1] >= 48 && s[i][y] <= 57)
				break;
			else if (s[i][y + 1] == '\0')
				flag = 2;
		}
	if (flag == 2)
		return (2);
	return (3);
}
