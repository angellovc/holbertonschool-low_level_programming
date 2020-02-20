#include "holberton.h"
/**
 **leet - encode into 1337
 *@s: array
 *
 *Return: array
 */
char *leet(char *s)
{
	int i = 0, y = 0;
	char alpha[] = "AaEeOoTtLl";
	char number[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		while (alpha[y] != '\0')
		{
			if (s[i] == alpha[y])
				s[i] = number[y];
			y++;
		}
		y = 0;
	}
	return (s);
}
