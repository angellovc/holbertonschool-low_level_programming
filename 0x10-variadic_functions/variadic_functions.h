#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 *struct s_format - structure of data types
 *@type: data type
 *@f: print void pointer
 */
typedef struct s_format
{
	char *type;
	void (*f)(void *);
} s_f;
void print_all(const char * const format, ...);
void print_char(void *p);
void print_int(void *p);
void print_float(void *p);
void print_string(void *p);

#endif
