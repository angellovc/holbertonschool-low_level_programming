#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_all - print all kind of arguments into a variatinc function
 *@format: data types
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	va_list list;
	unsigned int i = 0, y = 0;
	s_f s_format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
		   };

	va_start(list, format);
	while (format != '\0' && format[i] != '\0')
	{
		y = 0;
		while (y <= 3)
		{
			if (format[i] == s_format[y].type[0])
			{
				printf("%s", separator);
				s_format[y].f(list);
				separator = ", ";
			}
			y++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
/**
 *print_char - print a char list
 *@list: list from a variatic function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 *print_int - print a int list
 *@list: list from a variatic function
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 *print_float - print a float list
 *@list: list from a variatic function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 *print_string - print a string list
 *@list: list from a variatic function
 */
void print_string(va_list list)
{
	char *p = va_arg(list, char*);

	if (p == '\0')
		return;
	printf("%s", (char *)p);
}
