#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print numbers in a variadic function
 *@separator: separator
 *@n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int number = 0;

	va_start(list, n);
	for (i = 0; i < n ; i++)
	{
		number = va_arg(list, int);
		if (i != (n - 1) && separator != '\0')
			printf("%i%s", number, separator);
		else
			printf("%i", number);
	}
	printf("\n");
	va_end(list);
}
