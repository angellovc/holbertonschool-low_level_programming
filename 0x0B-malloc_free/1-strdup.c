#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - copy a string into other
 *@str: string
 *Return: pointer to string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, y = 0;
	char *copy;

	if (str == '\0')
		return ('\0');
	else
		for (i = 0; str[i]; i++);
	copy = malloc(i / sizeof(char));
	if (copy == '\0')
		return (copy);
	while (y < (i / sizeof(char)))
	{
		copy[y] = str[y];
		y++;
	}
	return (copy);
}
