#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, y = 0;
	void *p;
	void (*f)(void *);
	s_f s_format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
		   };

	va_start(list, format);
	while (format[i] != '\0')
	{
		y = 0;
		while (y <= 3)
		{
			if (format[i] == s_format[y].type[0])
			{
				p = va_arg(list, void *);
				if (p == '\0')
					printf("(nil)");
				f = s_format[y].f;
				(*f)((void *)p);
				break;
			}
			y++;
		}
		i++;

	}
		   va_end(list);

}
void print_char(void *p)
{
	printf("%c\n", *(char *)p);
}
void print_int(void *p)
{
	printf("%i\n", (*(int *)p));
}
void print_float(void *p)
{
	printf("%f\n", *(float *)p);
}
void print_string(void *p)
{
	printf("%s\n", (char *)p);
}
