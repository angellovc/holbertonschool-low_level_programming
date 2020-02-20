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

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (!*(src))
			*(dest + i) = '\0';

      	}
	return (dest);
}
