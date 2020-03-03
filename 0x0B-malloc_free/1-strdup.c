#include <stdlib.h>
/**
 *_strdup - copy a string into other
 *@str: string
 *Return: pointer to string
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *copy;

	if (str == '\0')
		return ('\0');
	copy = malloc(sizeof(str));
	if (copy == '\0')
		return ('\0');
	while (i < (sizeof(str) / sizeof(char)))
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
