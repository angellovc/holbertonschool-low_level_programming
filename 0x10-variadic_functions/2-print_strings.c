#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings - print an string in a variadic function
 *@separator: separator
 *@n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *p;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char *);
		if (p == '\0')
		{
			if  (i != (n - 1) && separator != '\0')
				printf("(nil)%s", separator);
			else
				printf("(nil)");
			continue;
		}
		if (i != (n - 1) && separator != '\0')
			printf("%s%s", p, separator);
		else
			printf("%s", p);
	}
	printf("\n");
	va_end(list);
}
