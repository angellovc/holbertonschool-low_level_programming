#include <stdio.h>
/**
 *print_array - print arrays
 *@a: receive an array
 *@n: receive an int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%i", a[i]);
		else
			printf("%i, ", a[i]);
	}
	printf("\n");
}
