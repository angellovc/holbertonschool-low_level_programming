#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - concatenate all the arguments
 *@ac: number of arguments
 *@av: arguments
 *Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, y = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return ('\0');
	l = _lenght(ac, av);
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return ('\0');
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
		{
			s[l] = av[i][y];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	return (s);
}
/**
 *_lenght - find a the lenght of the arguments
 *@ac: number of arguments
 *@av: arguments
 *Return: lenght
 */
int _lenght(int ac, char **av)
{
	int i = 0, y = 0, lenght = 0;

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
			lenght++;
	lenght++;
	}
	lenght++;
	return (lenght);
}
