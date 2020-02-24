#include "holberton.h"
/**
 *_strstr - this is a strstr function
 *@haystack: array
 *@needle: array
 *Return: position of the first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, y = 0, l = 0;
	char *p = '\0';

	while (needle[l])
		l++;
	for (i = 0; haystack[i]; i++)
	{
		y = 0;
		while (needle[y])
		{
			if (haystack[i] != needle[y])
				break;
			if (haystack[i] == needle[y])
				i++;
			y++;
			if (needle[y] == '\0')
			{
				i = i - l;
				p = (haystack + i);
				return (p);
			}
		}
	}
	return (p);
}
