#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	int y = 0, ressult = 0, i = 0;

	if (argc == 1)
	{
	printf("0\n");
		return (0);
	}
	y = letters_digits(argc, argv);
	if (y == 2)
	{
	printf("0\n");
		return (0);
	}
	if (y == 3)
	{
	printf("Error\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
		ressult = ressult + atoi(argv[i]);
	printf("%i\n", ressult);
	return (0);
}
/**
 *letters_digits - evalue if you got characters, numbers or mixed
 *@argc: number of arguments
 *@s: arguments
 *Return: 3 mixed, 2 characters, 1 just numbers
 */
int letters_digits(char argc, char **s)
{
	int i = 0, y = 0, flag = 0;

	for (i = 1; i < argc; i++)
	{
		for (y = 0; (s[i][y] != '\0'); y++)
		{
			if (s[i][y] < 48 || s[i][y] > 57)
			{
				flag = 0;
				break;
			}
			else if (s[i][y + 1] == '\0')
				flag = 1;
		}
		if (flag != 1)
			break;
	}
	if (flag == 1)
		return (1);
	for (i = 1; i < argc; i++)
	{
		for (y = 0; s[i][y] != '\0'; y++)
		{
			if (s[i][y] >= 48 && s[i][y] <= 57)
			{
				flag = 0;
				break;
			}
			else if (s[i][y + 1] == '\0')
				flag = 2;
		}
		if (flag != 2)
			break;
	}
	if (flag == 2)
		return (2);
	return (3);
}
