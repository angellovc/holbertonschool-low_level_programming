#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - simple calculator
 *@c: number of arguments
 *@av: numbers and sign
 *Return: 0 if function was success
 */
int main(int c, char **av)
{
	int n1 = 0, n2 = 0, ressult = 0;
	char *s;

	s = &*av[2];
	if (c != 4)
		exit(98);
	if ((*s == '/' && *av[3] == '0') || (*s == '%' && *av[3] == '0'))
		exit(100);
	n1 = atoi(&*av[1]);
	n2 = atoi(&*av[3]);

	ressult = (*get_op_func(s))(n1, n2);
	printf("%i\n", ressult);

	return (0);
}
