#include <stdlib.h>
/**
 *str_concat - concatenate two strings
 *@s1: string
 *@s2: string
 *Return: pointer to a contatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, y = 0, lenght = 0;
	char *s;

	if (s1 != '\0')
		while (s1[i])
			i++;
	if (s2 != '\0')
		while (s2[y])
			y++;
	lenght = y + i + 1;
	s = malloc(lenght * sizeof(char));
	if (s == '\0')
		return ('\0');
	if (i != 0)
	{
		i = 0;
		while (s1[i])
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (y != 0)
	{
		y = 0;
		while (s2[y])
		{
			s[i] = s2[y];
			y++;
			i++;
		}
	}
	return (s);
}
