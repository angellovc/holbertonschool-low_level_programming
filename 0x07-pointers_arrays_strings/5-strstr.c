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
	while (haystack[i] && l > 0)
	{
		if (haystack[i] == needle[y])
			y++;
		else if (haystack[i] != needle[y] && needle[y] != '\0')
			y = 0;
		if (needle[y] == '\0')
		{
			l--;
			i = i - l;
			return ((haystack + i));
		}
		else
			i++;
	}
	return (p);
}
