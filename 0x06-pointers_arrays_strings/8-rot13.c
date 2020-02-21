#include "holberton.h"
/**
 **rot13 - rot13
 *@s: array
 *Return: array codificated
 */
char *rot13(char *s)
{
	int i = 0, y = 0;
	char alph[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char code[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
		for (y = 0; alph[y] != '\0'; y++)
			if (s[i] == alph[y])
				s[i] = code[y];
	return (s);
}
