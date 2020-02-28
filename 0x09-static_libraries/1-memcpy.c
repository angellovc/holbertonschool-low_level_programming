#include "holberton.h"
/**
 **_memcpy - this is a memcpy function
 *@dest: string to copy
 *@src: string source
 *@n: number of changes
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
