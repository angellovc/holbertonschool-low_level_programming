#include "holberton.h"
/**
 **rot13 - rot13
 *@s: array
 *Return: array codificated
 */
char *rot13(char *s)
{
	int i = 0, y = 0;
	char alph[52] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char code[52] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; y <= 51; y++)
		{
			if (s[i] == alph[y])
			{
				s[i] = code[y];
				break;
				y++;
			}
		}
	}
	return (s);
}
