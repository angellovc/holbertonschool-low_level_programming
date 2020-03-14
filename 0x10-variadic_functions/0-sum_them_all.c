#include <stdarg.h>
/**
 *sum_them_all - sum arguments from a variatic function
 *@n: number of arguments
 *Return: sum of arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}
