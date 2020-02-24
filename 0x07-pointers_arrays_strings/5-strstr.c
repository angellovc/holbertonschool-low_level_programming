#include "holberton.h"
/**
 *_strstr - this is a strstr function
 *@haystack: array
 *@needle: array
 *Return: position of the first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, y = 0, l = 0;

	for (i = 0; needle[i]; i++)
		l++;
	l--;
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[y])
			y++;
		else
			y = 0;
		if (needle[y] == '\0')
		{
			i = i - l;
			return ((haystack + i));
		}
		else
			i++;
	}
	return ('\0');
}
