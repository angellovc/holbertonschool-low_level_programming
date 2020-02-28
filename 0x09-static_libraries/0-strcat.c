#include "holberton.h"
#include <stdio.h>
/**
 **_strcat - concatenate
 *@dest: arrray
 *@src: array
 *Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, y = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + y) != '\0')
	{
		*(dest + i) = *(src + y);
		i++;
		y++;
	}
	return (dest);
}
