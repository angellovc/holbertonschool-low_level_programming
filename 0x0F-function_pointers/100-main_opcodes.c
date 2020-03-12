#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	char *p = (char *)main;
	int byte, i = 0;

	byte = atoi(&*av[1]);
	if (ac != 2)
	{
		printf("Error");
		exit(1);
	}
	if (byte < 0)
	{
		printf("Error");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		printf("%02hhx ", p[i]);
	}
	return (0);
}
