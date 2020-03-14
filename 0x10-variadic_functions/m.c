#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
	int a = 1;
	void *p =  "c";
	printf("%c\n", *(char *)p);
	return (0);
}
