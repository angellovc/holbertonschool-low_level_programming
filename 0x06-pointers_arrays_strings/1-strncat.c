#include "holberton.h"

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, y = 0;

	while (*(dest + i) != '\0')
		i++;
	for (y = 0; y < n; y++)
	{
		*(dest + i) = *(src + y);
		i++;
		if (*(src + y) == '\0')
			break;
	}
	return (dest);
}
