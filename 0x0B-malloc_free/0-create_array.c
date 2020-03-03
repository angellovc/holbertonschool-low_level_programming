#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - make an initialized array
 *@size: size of the array
 *@c:char
 *Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	buffer = malloc(sizeof(char) * size);
	if (buffer == '\0')
		return ('\0');
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
