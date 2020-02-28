#include "holberton.h"
/**
 **_strncpy - copy string
 *@dest: string to copy
 *@src: string copied
 *@n: number of char copied
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		if (!(*(src + i)))
			break;
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
