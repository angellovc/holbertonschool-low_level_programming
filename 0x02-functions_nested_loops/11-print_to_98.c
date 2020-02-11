#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - print numbers until 96
 *@n: receive the initial number
 *
 *Return: don't return any value
 */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i, ", i);
			if (i == 98)
			{
				printf("%i\n", i);
			}
		}
	}
	else if (n == 98)
		printf("%i\n", 98);
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i, ", i);
			if (i == 98)
			{
				printf("%i\n", i);
			}

		}
	}
}
