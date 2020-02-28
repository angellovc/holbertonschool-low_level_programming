#include "holberton.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, y = 0;

	for (i = 1; i < argc; i++)
	{
		y = itsdigit(argv[i]);
		if (y == 1)
			printf("Error\n");
	}

	return (0);
}

int itsdigit(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			break;
		else if (s[i + 1] == '\0')
			return (0);
	}
		return (1);
}
