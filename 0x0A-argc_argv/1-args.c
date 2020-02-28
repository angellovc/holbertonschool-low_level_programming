#include <stdio.h>

int main(int argc, char **argv __attribute__((unused)))
{
	argc--;
	printf("%i\n", argc);
	return (0);
}
