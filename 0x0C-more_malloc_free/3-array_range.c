#include <stdlib.h>
/**
 *array_range - create an array of integers beetwen min and max range
 *@min: min range
 *@max: max range
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int l = 0, i = 0, *p;

	if (min > max)
		return ('\0');
	l = (max - min) + 1;
	p = malloc(l * sizeof(int));
	if (p == '\0')
		return ('\0');
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
