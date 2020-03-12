#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@ac: arguments number
 *@av: arguments
 *Return: 0
 */
int main(int ac, char **av)
{
	char *p = (char *)main;
	int byte, i = 0;

	byte = atoi(av[1]);
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		if (i == (byte - 1))
			printf("%02hhx\n", p[i]);
		else
			printf("%02hhx ", p[i]);
	}
	return (0);
}
