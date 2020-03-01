#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: string of arguments
 *Return: 1 if an error occur
 */
int main(int argc, char **argv)
{
	int value = 0, count = 0;

	if (argc != 2)
	{
	printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	while (value != 0)
	{
		value = change(value, &count);
	}
	printf("%i\n", count);
	return (0);

}
/**
 *change - make the change
 *@value: total amount to change
 *@count: accountand
 *Return: return the value changed
 */
int change(int value, int *count)
{
	if (value == 1)
	{
		value = value - 1;
		*count = *count + 1;
		return (value);
	}
	else if (value >= 2 && value < 5)
	{
		value = value - 2;
		*count = *count + 1;
		return (value);
	}
	else if (value >= 5 && value < 10)
	{
		value = value - 5;
		*count = *count + 1;
		return (value);
	}
	else if (value >= 10 && value < 25)
	{
		value = value - 10;
		*count = *count + 1;
		return (value);
	}
	else if (value >= 25)
	{
		value = value - 25;
		*count = *count + 1;
		return (value);
	}
	return (0);
}
