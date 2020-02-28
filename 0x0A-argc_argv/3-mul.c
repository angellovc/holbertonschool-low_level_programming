#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int ressult = 1, i = 1;

	if (argc != 3)
	{
		printf("Error\n");
		       return (1);
	}
	for (i = 1; i < argc; i++)
		ressult = ressult * atoi(argv[i]);
	printf("%i\n", ressult);
	return (0);
}
