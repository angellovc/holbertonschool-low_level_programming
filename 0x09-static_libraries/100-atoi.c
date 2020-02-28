#include "holberton.h"
/**
 *_atoi - this is and atoi function
 *@s: receive an array
 *
 *Return: the numbers in array
 */
int _atoi(char *s)
{
	int i, n1 = 0, number = 0;
	int  sign = 1;

	for (i = n1; s[i] != '\0' ; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + s[i] - '0';
		else if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] == '+')
			sign = sign * 1;

		if (s[i] < 58 && s[i] > 47 && s[i + 1] <= 49 && s[i + 1] >= 58)
			break;
	}
	return (number * sign);
}
